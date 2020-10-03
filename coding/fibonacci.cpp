#include<iostream>

using namespace std;

int fib(int n) {
	if(n <= 1) return n;

	int prev = 0, next = 1;
	int res = 0;
	for(int i = 2; i <= n; i++) {
		res = prev + next;
		prev = next;
		next = res;
	}

	return res;
}

int main() {
	cout<<fib(3)<<endl;
	cout<<fib(1)<<endl;
	cout<<fib(5)<<endl;
	cout<<fib(10)<<endl;
	cout<<fib(8)<<endl;
	cout<<fib(1500)<<endl;

	return 0;
}
