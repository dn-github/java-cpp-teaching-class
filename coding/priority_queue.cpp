#include<vector>
#include<queue>
#include<iostream>


#define pr pair<int, int>
using namespace std;

int main()
{

	vector<int> v = {2,1,5,7,6,2,7};
	sort(v.begin(), v.end(), greater<int>());
	for(int a : v) {
		cout<<a<<" ";
	}
	cout<<endl;

	priority_queue<pr> maxQ;
	maxQ.push({10, 5});
	maxQ.push({100, 10});
	maxQ.push({12, 7});
	maxQ.push({1, 8});
	maxQ.push({84, 39});
	maxQ.push({38, 54});

	while(!maxQ.empty()) {
		cout<<maxQ.top().first<<" "<<maxQ.top().second<<endl;
		maxQ.pop();
	}
	cout<<"\n";

	priority_queue<pr, vector<pr>, greater<pr> > minQ;
	minQ.push({10,5});
	minQ.push({100, 10});
	minQ.push({12, 7});
	minQ.push({1, 8});
	minQ.push({84, 39});
	minQ.push({38, 54});

	while(!minQ.empty()) {
		cout<<minQ.top().first<<" "<<minQ.top().second<<endl;
		minQ.pop();
	}
	cout<<"\n";
	
	return 0;

}