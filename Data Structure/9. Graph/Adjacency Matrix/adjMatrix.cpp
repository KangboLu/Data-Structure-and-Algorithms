// a DFS implementation
# include <iostream>
# include <vector>
using namespace std;

// Graph class
class Graph {
  vector< vector<int> > adjacencyMatrix; // adjacency list implementation
  vector<bool> visited; // track visited node
  int nodeNum;
public:
  // constructor to resize the adjacencyMatrix and Visited vector
  Graph(int size) {
    nodeNum = size;
    adjacencyMatrix.resize(size);
    for (int i = 0; i < size; i++)
      adjacencyMatrix[i].resize(size);
    visited.resize(size);
  }

  // add adjacencyMatrix to the graph with given current node
  void addEdge(int node1, int node2) {
    adjacencyMatrix[node1][node2] = 1;
  }

  // Depth first search algorithm
  void DFS(int start) {
    cout << start << " ";
    visited[start] = true;
    for(int j = 0; j < nodeNum; j++)
        if(!visited[j] && adjacencyMatrix[start][j])
          DFS(j);
  }
};

int main() {
  cout << "Ajacency Matrix implementation of graph: \n";

  // create a graph called g and add adjacencyMatrix to it
  Graph graph(4);
  graph.addEdge(0,1);
  graph.addEdge(0,2);
  graph.addEdge(1,0);
  graph.addEdge(2,0);
  graph.addEdge(2,3);
  graph.addEdge(3,2);
  graph.DFS(0);
}