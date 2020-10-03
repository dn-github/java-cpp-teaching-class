#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int highestProduct(vector<int> &arr) {
	int n = arr.size();
	unordered_map<int, int> mp; // key value pair

	for(int x : arr) {
		mp[x]++;
	}

	sort(arr.begin(), arr.end()); // O(NlogN)

	// ascending order me sorted
	int mult;
	for(int i = n-1; i > 1; i--) { // O(N)
		mult = arr[i];
		for(int j = 0; j < i; j++) { // O(N)
			if(mult % arr[j] == 0) {
				int div = mult/arr[j];
				if(div != arr[j] && mp[div] > 0)
					return mult;
				if(div == arr[j] && mp[div] > 1)
					return mult;
			}
		}
	}

	return mult;
}
// (N^2 + NlogN) = N^2

int main() {
	vector<int> arr = {3, 5, 10, 35, 30, 2, 7};
	int result = highestProduct(arr);
	cout<<result<<endl;
	return 0;
}