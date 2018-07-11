// this program demonstrate using dfs to check the connectivity of graph
# include <iostream>
# include <vector>
using namespace std;

// Graph class
class Graph {
  vector< vector<int> > adjacencyList; // adjacency list implementation
  vector<bool> visited; // track visited node
public:
  // constructor to resize the adjacencyList and Visited vector
  Graph(int size) {
    adjacencyList.resize(size);
    visited.resize(size);
  }

  // add adjacencyList to the graph with given current node
  void addEdge(int node1, int node2) {
    adjacencyList[node1].push_back(node2);
  }

  // Depth first search algorithm
  void DFS(int start) { 
    if (visited[start]) return; // if visted, return
    // cout << start << " "; // for debug purpose
    visited[start] = true;
    // process node start's connected node in the list
    for (auto u: adjacencyList[start])
      DFS(u); // recurse on the connected node until all visited
  }

  // check connectivity
  bool connectCheck(int start) {
    // using dfs to traverse the graph and check connectivity
    DFS(start);
    for (bool b : visited)
      if (!b)
        return false;
    return true;
  }
};

// output for connectCheck function
void connectStatus(bool b) {
  if (!b) cout << "Graph not fully connected!" << endl;
  else cout << "Graph is fully connected!" << endl;
}

int main() {
  // create a graph called g and add adjacencyList to it
  Graph graph1(4);
  graph1.addEdge(0,1);
  graph1.addEdge(0,2);
  graph1.addEdge(1,0);
  graph1.addEdge(2,0);
  graph1.addEdge(2,3);
  graph1.addEdge(3,2);

  // check connectivity
  cout << "- Testing connectivity for graph1:\n";
  connectStatus(graph1.connectCheck(0));
  cout << endl;

    // create a graph called g and add adjacencyList to it
  Graph graph2(5);
  graph2.addEdge(0,1);
  graph2.addEdge(0,2);
  graph2.addEdge(2,0);
  graph2.addEdge(2,1);
  graph2.addEdge(3,4);
  graph2.addEdge(4,3);

  // check connectivity
  cout << "- Testing connectivity for graph2:\n";
  connectStatus(graph2.connectCheck(0));
}