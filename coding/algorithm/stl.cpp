#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<unordered_set>
#include<queue>

using namespace std;

void printArr(vector<int> &arr) {
	for(int a : arr) 
		cout<<a<<" ";
	cout<<endl;
}

int main() {
// VECTOR
	vector<int> arr = {5,3,7,1,3,5,2};
	vector<int> arr2(arr.begin(), arr.end());
	vector<int> arr3(arr.size(), 1);

	printArr(arr);
	printArr(arr2);
	printArr(arr3);

	// reset a vector with zero value
	fill(arr3.begin(), arr3.end(), 0);

	// sort in ascending order
	sort(arr.begin(), arr.end());
	// sort in descending order
	sort(arr2.begin(), arr2.end(), greater<int>());

	printArr(arr);
	printArr(arr2);
	printArr(arr3);

	// insert
	// insert takes an iterator and inserts the value at that location. The previous element is moved ahead.
	arr.insert(arr.begin(), 100);
	arr.insert(arr.begin()+3, 200);
	// insert cannot take index, only iterator
	// arr.insert(3, 500); // error

	printArr(arr);

	// erase
	// erase by iterator
	// erase by iterator range
	arr.erase(arr.begin()+3);
	arr.erase(arr.begin());
	printArr(arr);

	// clear
	// clear reduces the size of the vector to 0
	vector<int> tempArr(arr.begin(), arr.end());
	cout<<"size initally: "<<tempArr.size()<<endl;
	tempArr.clear();
	cout<<"size initally: "<<tempArr.size()<<endl;

	// other functions: front, back, push_back, pop_back, empty, size

// STRING
	string s = "this is a sample code to explain all the important STL functions";
	string s1 = "these strings will change with below operations";

	// initialize with other string
	string s2(s.begin(), s.end());
	cout<<s<<endl<<s1<<endl<<s2<<endl;

	// sort in ascending
	sort(s2.begin(), s2.end());
	cout<<s2<<endl;
	// sort in descending
	sort(s1.begin(), s2.end(), greater<char>());
	cout<<s1<<endl;


	// insert
	// if insert takes an iterator, it can only insert single character at that location. The prev char is moved ahead.
	// if insert takes an index, it can insert single character as well as string at that location. The prev char is moved ahead.
	s.insert(s.begin(), 'y'); // appending 'yes '
	s.insert(1, "es ");
	cout<<s<<endl;

	// erase
	// erase by iterator
	// erase by iterator range
	// erase by index. will delete till end
	// erase by index till length
	string eraseStr = "delete this is a line delete from here";
	eraseStr.erase(eraseStr.begin(), eraseStr.begin()+7); // will delete first 7 characters
	eraseStr.erase(eraseStr.end()-4); // will delete one character
	//eraseStr.erase(0, 5); // erase first 5 characters
	cout<<eraseStr<<endl;
	s.erase(0, 4); // delete yes from s

	// substr
	// substr takes an index and optional length and returns a substring from that index with 'length' character
	cout<<s.substr(10, 6)<<endl; // returns sample
	cout<<s.substr(10)<<endl; // from 10th index till end

	// replace
	// replace takes an index, length and string; and replaces the section of original string from index till length with new string
	// replace takes iterator range and string; and replaces the section of original string in iterator range (exluding last iterator) with new string
	string replaceStr = "replace string";
	replaceStr.replace(replaceStr.begin(), replaceStr.begin()+7, "final"); 
	cout<<replaceStr<<endl; // returns "final string"


// UNORDERED MAP
	unordered_map<int, int> mp = {{1,2}, {2,3}, {3, 4}};
	for(auto it = mp.begin(); it != mp.end(); ++it)
		cout<<(it->first)<<" "<<(it->second)<<endl;

	// erase 
	// erase by key
	// erase by iterator
	// erase by iterator range
	mp.erase(1);
	cout<<mp[1]<<endl; // returns 0;

	// find
	// find by key. if not found, returns end()
	if(mp.find(5) == mp.end())
		cout<<"key 5 not found"<<endl;

// UNORDERED SET
	
	// insert by value
	// insert by iterator range
	unordered_set<int> us = {1,2,3,4,5};
	us.insert(6);
	vector<int> tempUs = {7,8,9};
	us.insert(tempUs.begin(), tempUs.end());

	for(auto it = us.begin(); it != us.end(); ++it)
		cout<<(*it)<<" ";
	cout<<endl;

	// erase and find same as unordered map

// STACK
	// pop, push, top, empty, size

// QUEUE
	// pop, push, front, back, empty, size


// PRIORITY QUEUE

	// functions are same as stack
	// pop, push, top, empty, size

	// max priority queue
	priority_queue<int> pq;
	for(int i = 1; i < 5; i++)
		pq.push(i);

	while(!pq.empty()) {
		int t = pq.top();
		pq.pop();
		cout<<t<<" ";
	}
	cout<<endl;

	// min priority queue
	priority_queue<int, vector<int>, greater<int> > minPq;
	for(int i = 1; i < 5; i++)
		minPq.push(i);

	while(!minPq.empty()) {
		int t = minPq.top();
		minPq.pop();
		cout<<t<<" ";
	}
	cout<<endl;


}