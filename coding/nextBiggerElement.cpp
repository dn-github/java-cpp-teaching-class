#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> nextBiggerElement(vector<int> &arr) {
	int n = arr.size();
	if(n == 0) return {};

	stack<int> st;
	vector<int> result(n, -1);

	for(int i = 0; i < n; i++){
		
		while(!st.empty() && arr[st.top()] < arr[i]) {
			result[st.top()] = arr[i];
			st.pop();
		}
		st.push(i);

	}
	return result;
}

int main() {
	vector<int> input = {2, 4, 8, 6, 4, 5, 12};

	vector<int> result = nextBiggerElement(input);

	for(int x : result)
		cout<<x<<" ";

	return 0;
}