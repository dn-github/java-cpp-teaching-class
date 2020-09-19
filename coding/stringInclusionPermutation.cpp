/*
Given two strings s1 and s2, write a function to return true if s2 contains 
the permutation of s1. In other words, one of the first string's permutations
is the substring of the second string.

s1 = abcg

acb
cab
bac
cba
bca

1 1 1 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 

s2 = defmncabgh
     abcg

1 1 1 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0


*/

#include<iostream>
#include<vector>
#include<string>

using namespace std;

bool checkInclusion(string s1, string s2) {
    int n1 = s1.length();
    int n2 = s2.length();

    if(n1 > n2) return false;
    vector<int> s1Count(26, 0), s2Count(26, 0);

    // 5 - 3 = 2
    // d - c = 1
    // d - a = 3
    // q - a = 16
    for(char c : s1) { // O(N1)
        s1Count[c - 'a']++;
    }

    for(int i = 0; i < n1; i++) {  // O(N1)
        s2Count[s2[i] - 'a']++;
    }

    if(s1Count == s2Count) return true;

    for(int i = 1; i <= n2-n1; i++) { // O(N2)
        s2Count[s2[i-1]-'a']--;
        s2Count[s2[i+n1-1]-'a']++;

        if(s1Count == s2Count) return true;      
    }

    return false;
}

int main() {
    string s1, s2;
    cout<<"enter first string"<<endl;
    cin>>s1;
    cout<<"enter second string"<<endl;
    cin>>s2;

    bool isPermutationSubstring = checkInclusion(s1,s2);

    if(isPermutationSubstring) 
        cout<<"YES"<<endl;
    if(!isPermutationSubstring)
        cout<<"NO";

    return 0;
}


