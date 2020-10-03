#include <iostream>
#include <list>
#include <vector>
#include <stack>

using namespace std;

class Graph {
	int V;
	list<int> *adjList;

public:

	Graph(int n) {
		V = n;
		adjList = new list<int>[V];
	}

	void addEdge(int u, int v) {
		adjList[u].push_back(v);
	}

	void topologicalSort() {
		stack<int> st;

		vector<bool> isVisited(V, false);

		for(int i = 0; i < V; i++)
			if(!isVisited[i])
				topologicalSortHelper(i, isVisited, st);

		int node;
		while(!st.empty()) {
			node = st.top();
			cout<<node<<" ";
			st.pop();
		}
	}

	void topologicalSortHelper(int startNode, vector<bool> &isVisited, stack<int> &st) {
		isVisited[startNode] = true;
		for(list<int>::iterator it = adjList[startNode].begin(); it != adjList[startNode].end(); ++it) 
			if(!isVisited[*it])
				topologicalSortHelper(*it, isVisited, st);

		st.push(startNode);	
	}
};

int main() {
	Graph g = Graph(6);
	cout<<"xx"<<endl;
	g.addEdge(5, 2); 
	cout<<"xx add edge"<<endl;
    g.addEdge(5, 0); 
    g.addEdge(4, 0); 
    g.addEdge(4, 1); 
    g.addEdge(2, 3); 
    g.addEdge(3, 1); 
  
    cout << "Following is a Topological Sort of the given graph \n"; 
    g.topologicalSort(); 
  
    return 0;
}