#include <iostream>
#include<string>
#include <algorithm>

using namespace std;

int main()
{
	string s = "abcdefghijklmnopqrstuvwxyz";

	// substring takes start index and length
	cout<<"substring from start and end "<<s.substr(0)<<endl;
	cout<<"substring from 10th index and end "<<s.substr(10)<<endl;
	cout<<"substring of length 10 from 10th index "<<s.substr(10, 10)<<endl;
	// 40 length not possible. so returns until end
	cout<<"substring of length 40 from 10th index "<<s.substr(10, 40)<<endl;

	// replace takes start index and length
	// replace a substring with another string
	s.replace(0, 3, "cba");
	cout<<"string after replacement "<<s<<endl;
	s.replace(s.begin(), s.begin()+3, "abc");
	cout<<"string replacement revert "<<s<<endl;



	string rep = "abcdcbabmnca";
	// string replace function replaces an index range with some other string. To replace a character with another character use
	// algorithm replace.
	// For example: to replace all 'a' with *
	replace(rep.begin(),rep.end(), 'a', '*');
	cout<<"replacing a with * "<<rep<<endl;
	replace(rep.begin(), rep.end(), '*', 'a');

	// find finds the first occurence of 'a' from beginnng
	size_t got = rep.find('a');
	cout<<"found a from beginning at "<<got<<endl;
	// find first occurence of 'a' from 4th Index.
	got = rep.find('a', 4);
	cout<<"found a from 4th index at "<<got<<endl;

	got = rep.find('*');
	if(got == string::npos)
		cout<<"when could not find an element "<<got<<endl;
	// find first occurence of bcd from beginning
	got = rep.find("bcd");
	cout<<"found bcd at "<<got<<endl;

	got = rep.find("xyz");
	if(got != string::npos)
		cout<<"found xyz at "<<got<<endl;

	// erase erases an index range
	// takes first, len(default end)
	// or firstIterator lastIterator
	// or one iterator

	// following will erase just one character because input is iterator not index.
	rep.erase(rep.begin()+1);
	cout<<rep<<endl;

	// following will erase everything from first d until end. Because an index is passed.
	// rep.erase(rep.find('d'));

	// following will erase one character because an index and length 1 is passed.
	rep.erase(rep.find('d'), 1);
	cout<<"after erasing b "<<rep<<endl;

	return 0;
}