#include <iostream>
#include <string>

using namespace std;

void permute(string in, int l, int r) {
	if(l == r) {
		cout<<in<<endl;
		return;
	}

	for(int i = l; i <= r; i++) {
		char temp = in[l];
		in[l] = in[i];
		in[i] = temp;

		permute(in, l+1, r);

		temp = in[i];
		in[i] = in[l];
		in[l] = temp;
	}
}

int main() 
{
	string in = "ABC";
	permute(in, 0, in.length()-1);
	return 0;
}