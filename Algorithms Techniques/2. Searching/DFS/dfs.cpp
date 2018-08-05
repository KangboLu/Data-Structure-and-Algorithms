# include <iostream>
# include <algorithm>
# include <vector>
# include <queue>
using namespace std;

class Graph {
  vector< vector<int> > Edges;
  vector<bool> visited;
public:
  // constructor function to initialize ajacency matrix
  Graph(int V) {
    Edges.resize(V);
    visited.resize(V);
  }

  // add edge to the graph
  void add_edge(int v, int w) {
    Edges[v].push_back(w);
  }

  // dfs algorithm
  void DFS(int s) { 
    if (visited[s]) return; // if visited, go up
    cout << s << " ";
    visited[s] = true; // mark as visited
    // process node s
    for (auto u: Edges[s]) // recursively go down until visited
      DFS(u);
  }
};

int main() {
  // create a graph called g and add edges to it
  Graph graph(6);
  graph.add_edge(0,1);
  graph.add_edge(0,2);
  graph.add_edge(1,0);
  graph.add_edge(2,0);
  graph.add_edge(2,3);
  graph.add_edge(3,2);
  graph.DFS(0);
}