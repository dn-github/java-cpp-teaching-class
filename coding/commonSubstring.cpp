/*
find the biggest common substring in two given strings

abcdfghmn  kypabcztm
ans: abc
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int commonSubstrLengthRecurUtil(string X, string Y) {
	int m = X.length();
	int n = Y.length();

	if(m == 0 || n == 0)
		return 0;

	if(X[m-1] == Y[n-1])
		maximum = max(maximum, 1 + commonSubstrLengthRecurUtil(X.substr(0, m-1), Y.substr(0, n-1)));
	else
		return 0;

	return maximum;
}

int commonSubstrLengthRecur(string X, string Y) {
	int maximum = 0;
	return commonSubstrLengthRecurUtil(X, Y, maximum);
}

int commonSubstrLength(string X, string Y) {
	int m = X.length();
	int n = Y.length();
	// dp[i][j] denotes the longest common substring in the strings X[0...i-1] and Y[0...j-1] AND ENDING AT i-1 and j-1.
	// In other words, dp[i][j] is the longest common suffix of the strings X[0...i-1] and Y[0...j-1] 
	vector<vector<int> > dp(m+1, vector<int>(n+1, 0));


	int maximum = 0;
	for(int i = 0; i <= m; i++) {
		for(int j = 0; j <= n; j++) {
			if(i == 0 || j == 0){
				dp[i][j] = 0;
			}

			else if(X[i-1] == Y[j-1]) 
				dp[i][j] = dp[i-1][j-1] + 1;
			else
				dp[i][j] = 0;

			maximum = max(maximum, dp[i][j]);
		}
	}
	return maximum;
}


int main() {
	cout<<commonSubstrLengthRecur("abcdfghmn", "kypabcztmn") <<endl;
	cout<<commonSubstrLengthRecur("abcdfghmn", "kypabcztghmndgasghal");
	return 0;
}