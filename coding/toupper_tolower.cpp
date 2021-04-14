#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

void toupper(string &s) {
	for(char &c : s) {
		c = tolower(c);
	}

	// for_each(s.begin(), s.end(), [](char &c) {
	// 	c = tolower(c);
	// });
}

bool mySortFunc(pair<int, string> p1, pair<int, string> p2) {
    if(p1.first == p2.first)
        return p1.second.compare(p2.second) > 0;
    return p1.first > p2.first;
}


int main()
{
	vector<pair<int, string> > x = {{10,"dev"},{0,"narayan"},{1,"rakhi"},{1,"kumari"},{2,"praful"}};
	sort(x.begin(), x.end(), mySortFunc);

	for(pair<int, string> p : x) {
		p.second[0] = 'a';
		cout<<p.first<<" "<<p.second<<endl;
	}

	string s1 = "AbCDefGhiK";
	toupper(s1);
	cout<<s1<<endl;

	string s2 = "1234.1234";
	cout<<stoi(s2)<<endl;
	cout<<stof(s2)<<endl;
	cout<<stod(s2)<<endl;

	int n = 1234;
	cout<<to_string(n)<<endl;

	float n1 = 1234.1234;
	cout<<to_string(n1)<<endl;

	double n2 = 1234.1234;
	cout<<to_string(n2)<<endl;

	return 0;
}