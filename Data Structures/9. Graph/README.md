# Graph

## 1. Definition and Elements of Graph

* A graph consists of *nodes and edges*.
* Commonly, the variable *n denotes the number of nodes* in a graph, 
and the variable *m denotes the number of edges*.
* A *path* leads from node a to node b through edges of the graph. 
* The *length of a path* is the number of edges in it.
* A path is a *cycle* if the first and last node is the same
* A path is *simple* if each node appears at most once in the path

## 2. Type of graphs
* A graph is *connected* if there is a path between any two nodes.
* The connected parts of a graph are called its *components* 
* A *tree* is a connected graph that consists of n nodes and n − 1 edges. *There is a unique path* between any two nodes of a tree
* A graph is *directed* if the edges can be traversed in one direction only.
* In a *weighted graph*, each edge is assigned a weight. The weights are often interpreted as edge lengths.
* A *simple graph* has no edge starts and ends at the same node, and there are no multiple edges between two nodes

## 3. Neighbor and Degrees
* Two nodes are *neighbors or adjacent* if there is an edge between them. The degree of a node is the number of its neighbors
* The sum of degrees in a graph is always 2m, where m is the # of edges
* In a directed graph, the *indegree of a node* is the number of edges that end at the node, and the *outdegree of a node* is the number of edges that start at the node

## 4. Graph Coloring
* In a coloring of a graph, each node is assigned a color so that no adjacent nodes have the same color.
* A graph is *bipartite* if it is possible to color it using two colors. 
* It turns out that a graph is bipartite exactly when it *does not contain a cycle* with an *odd number of edges*.

## 5. Representation of graphs

1. Edge list: maintains an unordered list of all edges. This minimally
suffices, but there is no efficient way to locate a particular edge (u,v), or the
set of all edges incident to a vertex v.
2. Adjacency list: maintains, for each vertex, a separate list containing
those edges that are incident to the vertex. The complete set of edges can
be determined by taking the union of the smaller sets, while the organization
allows us to more efficiently find all edges incident to a given vertex.
3. Adjacency map: similar to an adjacency list, but the secondary
container of all edges incident to a vertex is organized as a map, rather than
as a list, with the adjacent vertex serving as a key. This allows for access to
a specific edge (u,v) in O(1) expected time.
4. Adjacency matrix: provides worst-case O(1) access to a specific edge
(u,v) by maintaining an n×n matrix, for a graph with n vertices. Each
entry is dedicated to storing a reference to the edge(u,v) for a particular pair
of vertices u and v; if no such edge exists, the entry will be empty.