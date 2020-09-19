/*
You have n candies, the ith candy is of type candies[i].

You want to distribute the candies equally between a sister and a brother so that 
each of them gets n / 2 candies (n is even). The sister loves to collect different 
types of candies, so you want to give her the maximum number of different types of 
candies.

Return the maximum number of different types of candies you can give to the sister.

2 4 6 1 8 1 2 6

8 number of chocolates
5 types of chocolates

4-4
4 variety

if number of varieties is more than sister's half, then give all with different varieties
if number of varieties is less than sister's half, give her all the varieties

*/

#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

int maxDifferentVarieties(vector<int> &input) {
    int n = input.size();
    if(n % 2 != 0) return -1; // error case

    unordered_set<int> differentCandies;

    int differentCandiesCount = 0;
    for(int i = 0; i < n; i++) {
        if(differentCandies.find(input[i]) == differentCandies.end()) {
            differentCandiesCount++;
            differentCandies.insert(input[i]);
        }
    }

    return min(differentCandiesCount, n/2);

}

int main() {
    int num;
    cout<<"enter number of elements"<<endl;
    cin>>num;

    vector<int> arr;
    int elem;
    for(int i = 0; i < num; i++) {
        cout<<"Enter element"<<endl;
        cin>>elem;
        arr.push_back(elem);
    }

    cout<<"Sister will get varieties "<<maxDifferentVarieties(arr);
    return 0;
}

