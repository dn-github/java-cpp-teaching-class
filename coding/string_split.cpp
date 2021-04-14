#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;

void splitString(string s) {
	// stringstream ss(s);
	// string token;

	// while(getline(ss, token, ' ')) {
	// 	cout<<token<<endl;
	// }
	// while(ss >> token)
	// 	cout<<token<<endl;

	stringstream ss(s);
	stringstream ss2;
	string token;

	// while(getline(ss, token, ' ')) {
	// 	cout<<token<<endl;
	// }

	while(ss >> token) {
		cout<<"token: "<<token<<endl;
		ss2 << token;
	}

	while(ss2 >> token) {
		cout<<"token:: "<<token<<endl;
	}
}

void splitStringSTL(string s) {
	string delim = " ";
	int start = 0;
	int end = s.find(delim);
	while(end != string::npos) {
		cout<<"start  "<<start<<" end "<<end<<endl;
		cout<<s.substr(start, end-start)<<endl;
		start = end+1;
		end = s.find(delim, start);
	}
	cout<<s.substr(start, end-start)<<endl;
}

int main() 
{
	string s;
	cout<<"enter a string: ";
	getline(cin, s);
	cout<<s<<endl;
	splitStringSTL(s);
	return 0;
}