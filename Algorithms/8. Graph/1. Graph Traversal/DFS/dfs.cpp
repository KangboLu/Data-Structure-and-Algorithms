// a DFS implementation
# include <iostream>
# include <vector>
using namespace std;

// Graph class
class Graph {
  vector< vector<int> > adjacencyList; // adjacency list implementation
  vector<bool> visited; // track visited node
public:
  // constructor to resize the adjacencyList and Visited vector
  Graph(int V) {
    adjacencyList.resize(V);
    visited.resize(V);
  }

  // add adjacencyList to the graph with given current node
  void addEdge(int node1, int node2) {
    adjacencyList[node1].push_back(node2);
  }

  // Depth first search algorithm
  void DFS(int start) { 
    if (visited[start]) return; // if visted, return
    cout << start << " ";
    visited[start] = true;
    // process node start's connected node in the list
    for (auto u: adjacencyList[start])
      DFS(u); // recurse on the connected node until all visited
  }
};

int main() {
  // create a graph called g and add adjacencyList to it
  Graph graph(4);
  graph.addEdge(0,1);
  graph.addEdge(0,2);
  graph.addEdge(1,0);
  graph.addEdge(2,0);
  graph.addEdge(2,3);
  graph.addEdge(3,2);
  graph.DFS(0);
}