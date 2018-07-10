// a DFS implementation
# include <iostream>
# include <vector>
using namespace std;

// Graph class
class Graph {
  vector< vector<int> > Edges;
  vector<bool> visited;
public:
  // constructor
  Graph(int V) {
    Edges.resize(V);
    visited.resize(V);
  }

  // add edges to the graph
  void addEdge(int v, int w) {
    Edges[v].push_back(w);
  }

  // Depth first search algorithm
  void DFS(int s) { 
    if (visited[s]) return; // if visted, return
    cout << s << " ";
    visited[s] = true;
    // process node s
    for (auto u: Edges[s]) // iterate the edges
      DFS(u);
  }
};

int main() {
  // create a graph called g and add edges to it
  Graph graph(6);
  graph.addEdge(0,1);
  graph.addEdge(0,2);
  graph.addEdge(1,0);
  graph.addEdge(2,0);
  graph.addEdge(2,3);
  graph.addEdge(3,2);
  graph.DFS(0);
}