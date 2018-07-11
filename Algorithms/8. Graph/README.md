# Graph Algorithms

## 1. Graph Traversal

1. Depth First Search:

Graph's Depth First Search is similar to Depth First Traversal of a tree. 
The only difference is that graphs may contain cycles, so we may come to the same node again. 
To avoid processing a node more than once, we use a boolean visited array to track visited nodes.

DFS traversal of G can be performed in O(n+m) time, and can be used to solve
the following problems in O(n+m) time:
* Computing a path between two given vertices of G , if one exists.
* Testing whether G is connected.
* Computing a spanning tree of G , if G is connected.
* Computing the connected components of G .
* Computing a cycle in G , or reporting that G has no cycles.
 
2. Breadth First Search

Breadth first search traverses the graph level by level.
I obtain a visited array like how I implement the dfs algorithm.
A BFS traversal of G takes O(n+m) time.

3. Applications:

*Connectivity Check*: we can use bfs or dfs to traverse the graph and label visited for each node. If there are not visited node left in the graph after traversal, then the graph is not connected.

## 2. Shortest Paths

1. Bellman-Ford Algorithm

2. Dijkstra's Algorithm

3. Floyd-Warshall Algorithm

## 3. Directed Graphs

1. Topological Sort

2. Dynamic Programming

3. Successor Paths

4. Cycle Detection

## 4. Paths and Circuits

1. Eulerian Paths

2. Hamiltonian Paths

3. De Brujin Sequences

4. Knight's Tours

## 5. Flows and Cuts

1. Ford-Fulkerson Algorithm

2. Disjoint Paths

3. Maximum Matchings

4. Path Covers
