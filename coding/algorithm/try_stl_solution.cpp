#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <queue>
#include <sstream>
#include <cstring>

using namespace std;

void printSTL(vector<int> &v) {
	for(int x : v)
		cout<<x<<" ";
	cout<<endl;
}

void printSTL(list<int> &v) {
	for(int x : v)
		cout<<x<<" ";
	cout<<endl;
}

void printSTL(string s) {
	cout<<s<<endl;
}

void printSTL(unordered_map<int, int> &mp) {
	for(pair<int, int> x : mp)
		cout<<x.first<<" "<<x.second<<endl;;
	cout<<endl;
}

void printSTL(unordered_set<int> &st) {
	for(int x : st)
		cout<<x<<" ";
	cout<<endl;
}

int increment(int x) {  return (x+1); }

int main()
{
	// ===== VECTOR =====
	cout<<"===== VECTOR ====="<<endl;
	// initalize vectors 
	vector<int> varr1(10, 1);
	vector<int> varr2 = {1,2,3,4,5,6,7,8,9,10};
	printSTL(varr1); printSTL(varr2);
	// insert in the beginning
	varr1.insert(varr1.begin(), 2);
	// insert in the end
	varr1.insert(varr1.end(), 3);
	// insert after 3rd element
	varr1.insert(varr1.begin()+3, 5); // insert at 4th element
	printSTL(varr1);
	// get the first element
	vector<int>::iterator it;
	cout<<(varr1.front())<<endl;
	it = varr1.begin();
	cout<<*it<<endl;
	// get the last element
	cout<<varr1.back()<<endl;
	it = varr1.end()-1;
	cout<<*it<<endl;
	// remove first element
	varr1.erase(varr1.begin());
	// remove last element
	varr1.pop_back();
	// remove the 4th element
	varr1.erase(varr1.begin()+3);
	printSTL(varr1);
	// reverse the vector
	reverse(varr2.begin(), varr2.end());
	// check if two vectors are same
	vector<int> tempVct = {10,9,8,7,6,5,4,3,2,1};
	if(tempVct == varr2) {
		cout<<"temp and varr2 are same"<<endl;
	} else {
		cout<<"temp and varr2 are not same"<<endl;
	}
	// sort in ascending order
	sort(varr2.begin(), varr2.end());
	printSTL(varr2);
	// sort in descending order
	sort(varr2.begin(), varr2.end(), greater<int>());
	printSTL(varr2);
	// fill all vectors with 0
	varr2.clear();

	// ==== STRING ====
	cout<<"===== STRING ====="<<endl;
	// initialize a string
	string s2 = "randomfandom";
	string s1 = "me is dev";
	printSTL(s1); printSTL(s2);
	// insert in the beginning
	s1.insert(s1.begin(), 'm'); // to insert character, use iterator
	s1.insert(1, "y "); // to insert string or char array, use index
	// insert in the end
	s1.insert(s1.end(), 'n');
	s1.push_back('a');
	s1.insert(s1.length(), "rayan");
	// insert after 3rd element
	s1.insert(s1.begin()+3, 'n');
	s1.insert(4, "a");
	printSTL(s1);
	// get the first character
	cout<<s1[0]<<endl;
	cout<<s1.front()<<endl;
	cout<<*(s1.begin())<<endl;
	// get the last character
	cout<<s1.back()<<endl;
	cout<<*(s1.end()-1)<<endl;
	// remove first character
	s2.erase(s2.begin());
	// remove last character
	s2.pop_back();
	// remove the 5th character
	s2.erase(s2.begin()+4);
	printSTL(s2);
	// remove from a particular index till end or some length
	s2.erase(4, 2); // from index 4, two characters
	s2.erase(4); // from index 4 till end
	printSTL(s2);

	// find a character in the string
	size_t sit = s1.find('n'); // find returns size_t
	cout<<sit<<endl;
	// find a string in the string
	sit = s1.find("name");
	cout<<sit<<endl;

	// get substring from 2nd index till end
	cout<<s1.substr(2)<<endl;
	// get substring of size 4 from 2nd index
	cout<<s1.substr(2, 4)<<endl;
	// reverse the string
	reverse(s1.begin(), s1.end());
	printSTL(s1);
	// sort the string ascending order
	sort(s1.begin(), s1.end());
	printSTL(s1);
	// sort the string in descending order
	sort(s1.begin(),s1.end(),greater<char>());
	printSTL(s1);
	// compare two strings
	string tempStr = "danny";
	int compRes = s2.compare(tempStr);
	if (compRes > 0) {
		cout<<s2<<" is larger than "<<tempStr<<endl;
	} else if(compRes < 0) {
		cout<<s2<<" is smaller than "<<tempStr<<endl;
	} else {
		cout<<s2<<" is same as "<<tempStr<<endl;
	}
	// change all characters to lowercase
	transform(s2.begin(),s2.end(),s2.begin(), ::tolower);
	printSTL(s2);
	// change all characters to uppercase
	transform(s2.begin(), s2.end(), s2.begin(), ::toupper);
	printSTL(s2);
	// split a string by space
	string splitString = "my name is dev   narayan";

	stringstream ss1(splitString);
	string token;
	while(getline(ss1, token, ' ')) {
		cout<<token<<endl;
	}
	
	// split a string by multiple spaces
	char* tokenize = strtok(const_cast<char*>(splitString.c_str()), " "); // THIS CHANGES THE ORIGINAL STRING
	while(tokenize != NULL) {
		cout<<tokenize<<endl;
		tokenize = strtok(NULL, " ");
	}

	stringstream ss2("my name is  dev    narayan");
	while(ss2 >> token) {
		cout<<token<<endl;
	}
	// split a string by tokens
	string tokenString = "my,name,is,dev,narayan";
	stringstream ss3(tokenString);
	while(getline(ss3, token, ',')) {
		cout<<token<<endl;
	}

	// ===== LIST =====
	cout<<"===== LIST ====="<<endl;
	// initialize a list
	list<int> lst1 = {1,2,3,4,5,6,7,8,9,10};
	list<int> lst2(10, 1);
	printSTL(lst1); printSTL(lst2);
	// insert in the beginning
	lst1.push_front(0);
	lst1.insert(lst1.begin(), -1);
	// insert in the end
	lst1.push_back(11);
	lst1.insert(lst1.end(), 12);
	// insert after 3rd element
	// lst1.insert(lst1.begin()+3, 99); WRONG. list iterator cannot perform +,- operation. You can do ++, -- though
	printSTL(lst1);
	// get the first element
	cout<<lst1.front()<<endl;
	cout<<*(lst1.begin())<<endl;
	// get the last element
	cout<<lst1.back()<<endl;
	cout<<*(--lst1.end())<<endl;
	// remove first element
	lst1.pop_front();
	lst1.erase(lst1.begin());
	// remove last element
	lst1.pop_back();
	// remove the 5th element
	// lst1.erase(lst1.begin()+4); // list iterator does not work this way. No +, - operation allowed.
	printSTL(lst1);
	// reverse the list
	reverse(lst1.begin(), lst1.end());
	printSTL(lst1);
	// sort in ascending order
	// sort(lst1.begin(), lst1.end());  // CANNOT PERFORM SORTING ON LIST
	// printSTL(lst1);
	// sort in descending order
	//sort(lst1.begin(), lst1.end(), greater<int>());
	//printSTL(lst1);


	// ===== STACK =====
	cout<<"===== STACK ====="<<endl;
	// initialize a stack
	stack<int> stk1;
	// stack<int> stk1 = {1,2,3,4};  CANNOT INITIALIZE STACK LIKE THIS
	// push elements
	stk1.push(4);
	stk1.push(5);
	// get last element
	cout<<stk1.top()<<endl;
	// remove last element
	stk1.pop();
	cout<<stk1.top()<<endl;

	// ===== QUEUE =====
	cout<<"===== QUEUE ====="<<endl;
	// initialize a queue
	queue<int> que;
	// push elements
	que.push(3);
	que.push(4);
	que.push(5);
	// get first element
	cout<<que.front()<<endl;
	// get last element
	cout<<que.back()<<endl;
	// remove first element
	que.pop();
	cout<<que.front()<<endl;
	// remove last element
	// NOT SUPPORTED

	// ===== PRIORITY QUEUE =====
	cout<<"===== PRIORITY QUEUE ====="<<endl;
	// initialize a max priority queue
	priority_queue<int> maxHeap;
	// initialize a min priority queue
	priority_queue<int, vector<int>, greater<int>> minHeap;
	// insert elements in both
	maxHeap.push(4); maxHeap.push(5); maxHeap.push(6);
	minHeap.push(4); minHeap.push(5); minHeap.push(6);
	// get top elements from both
	cout<<maxHeap.top()<<endl;
	cout<<minHeap.top()<<endl;
	// remove first element from both
	maxHeap.pop(); minHeap.pop();
	cout<<maxHeap.top()<<endl;
	cout<<minHeap.top()<<endl;
	// remove any element from both
	// NOT SUPPORTED
	// change any element from both
	// NOT SUPPORTED


	// ==== HASHMAP =====
	cout<<"===== HASHMAP ====="<<endl;
	// intialize a hashmap
	unordered_map<int, int> ump = {{1,2},{2,3},{3,4}};
	// insert values
	ump.insert({4,5});
	// find any value
	if(ump.find(3) != ump.end()) {
		cout<<"key 3 is found"<<endl;
	} else {
		cout<<"key 3 is not found"<<endl;
	}
	// change any value
	ump[3]++;
	cout<<ump[3]<<endl;
	// delete any value
	ump.erase(3);
	if(ump.find(3) != ump.end()) {
		cout<<"key 3 is found"<<endl;
	} else {
		cout<<"key 3 is not found"<<endl;
	}


	// ===== HASHSET =====
	cout<<"===== HASHSET ====="<<endl;
	// initialize a hashset
	unordered_set<int> ust = {1,2,3,4,5};
	// insert values
	ust.insert(6);
	// find any value
	if(ust.find(3) != ust.end()) {
		cout<<"key 3 is found"<<endl;
	} else {
		cout<<"key 3 is not found"<<endl;
	}
	// delete any value
	ust.erase(3);
	if(ust.find(3) != ust.end()) {
		cout<<"key 3 is found"<<endl;
	} else {
		cout<<"key 3 is not found"<<endl;
	}


	// ===== ALGORITHM =====
	cout<<"===== ALGORITHM ====="<<endl;
	int int1 = 10; float float1 = 10.10;
	int int2 = -10; float float2 = -10.10;
	// find squareroot of a number
	cout<<sqrt(int1)<<endl;
	cout<<sqrt(float1)<<endl;
	// find maximum of two numbers
	cout<<max(int1, int2)<<endl;
	// find minimum of two numbers
	cout<<min(int1, int2)<<endl;
	// find floor of positive number
	cout<<floor(int1)<<endl;
	cout<<floor(float1)<<endl;
	// find floor of negative number
	cout<<floor(int2)<<endl;
	cout<<floor(float2)<<endl;
	// find ceil of positive number
	cout<<ceil(int1)<<endl;
	cout<<ceil(float1)<<endl;
	// find ceil of negative number
	cout<<ceil(int2)<<endl;
	cout<<ceil(float2)<<endl;
	// find absolute value of a number
	cout<<abs(int1)<<endl;
	cout<<abs(int2)<<endl;
	cout<<abs(float1)<<endl;
	cout<<abs(float2)<<endl;
	// find log value of a number with base X
	cout<<log2(32)<<endl;
	cout<<log10(100)<<endl;
	// find power of x on y
	cout<<pow(2,4)<<endl;


	// ===== UTILITY =====
	cout<<"===== UTILITY ====="<<endl;
	string util = "a B  1  #	\n \t \b";
	for(char c : util) {
		if(isdigit(c))
			cout<<c<<" is a digit"<<endl;
		if(isalpha(c))
			cout<<c<<" is a alphabet"<<endl;
		if(islower(c))
			cout<<c<<" is a lowercase"<<endl;
		if(isupper(c))
			cout<<c<<" is a uppercase"<<endl;
		if(isspace(c))
			cout<<c<<" is a space"<<endl;
		if(ispunct(c))
			cout<<c<<" is a punctuation"<<endl;
	}
	// check if a character is whitespace
	// check if a character is lowercase
	// check if a character is uppercase
	// check if a character is numeric
	// check if a character is special character
	// check if a character is tab
	// check if a character is space
	// convert string to integer
	string intStr1 = "123", intStr2 = "123abc";
	cout<<stoi(intStr1)<<endl;
	cout<<stoi(intStr2)<<endl;
	// convert string to float
	string floatStr1 = "123.123", floatStr2 = "123.123abc";
	cout<<stof(floatStr1)<<endl;
	cout<<stof(floatStr2)<<endl;
	// convert integer to string
	cout<<to_string(123)<<endl;
	// convert float to string
	cout<<to_string(123.123)<<endl;

	// ===== TRANSFORM =====
	cout<<"===== TRANSFORM ====="<<endl;
	string transformStr1 = "DevNarayan", transformStr2 = "archanakumari";
	vector<int> transformVector1 = {1,2,3}, transformVector2 = {4,5,6}, transformVector3(3,0);
	// transform a string to lowercase
	transform(transformStr1.begin(), transformStr1.end(), transformStr2.begin(), ::tolower);
	printSTL(transformStr2);
	// transform a string to uppercase
	transform(transformStr1.begin(), transformStr1.end(), transformStr2.begin(), ::toupper);
	printSTL(transformStr2);
	// change each element of a vector to square of that element
	transform(transformVector1.begin(), transformVector1.end(), transformVector1.begin(), increment);
	printSTL(transformVector1);
	// given two vectors, add corresponding element
	transform(transformVector1.begin(), transformVector1.end(), transformVector2.begin(), transformVector3.begin(), plus<int>());
	printSTL(transformVector3);


	return 0;
}