#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	unordered_map<int, int> um = {{1,1},{2,2},{3,3}};

	cout<<"see if constructor working "<<um[2]<<endl;

	cout<<"unset key 0 value is "<<um[0]<<endl;
	um[0]++;
	cout<<"increasing default value key 0 value "<<um[0]<<endl;

	//deleting by iteragor
	um.erase(um.find(2));
	cout<<"key 2 value "<<um[2]<<endl;

	// deleting by key
	um.erase(3);
	cout<<"key 3 value "<<um[3]<<endl;

	// even after erasing 3 above, the count shows 1. because using um[3] creates the value with key 3
	cout<<"count of 1 and 3 are "<<um.count(1)<<" "<<um.count(3)<<endl;

	return 0;
}