# include <iostream>
# include <vector>
# include <queue>
using namespace std;

class Graph {
  vector< vector<int> > adjacencyList;
  vector<bool> visited;
  public:
    // constructor to resize the adjacencyList and Visited vector
    Graph(int size) {
      adjacencyList.resize(size);
      visited.resize(size);
    }

    // add adjacencyList to the graph with given current node
    void add_edge(int node1, int node2) {
      adjacencyList[node1].push_back(node2);
    }

    // Breadth first search algorithm
    void BFS(int start) {
      // initialize the visisted tracker to false
      for (int i : visited) 
        i = false;
      queue<int> q; // create queue to push vertex
      visited[start] = true; // make the first vertx visited
      q.push(start); // push it to queue

      // checking the graph level by level
      while (!q.empty()) {
        start = q.front();
        cout << start << " ";
        q.pop();
        
        // scan the list of connected adjacencyList and enque it
        for (int i : adjacencyList[start]) {
          if (!visited[i]) {
            visited[i] = true;
            q.push(i);
          }
        }
      }
      cout << endl;
    }
};

int main() {
  // create a graph called g and add adjacencyList to it
  Graph g(4);
  g.add_edge(0,1);
  g.add_edge(0,2);
  g.add_edge(1,0);
  g.add_edge(2,0);
  g.add_edge(2,3);
  g.add_edge(3,2);

  int v;
  cout<<"Enter vertex from where to perform BFS"<<endl;
  cin>>v;
  g.BFS(v);
}