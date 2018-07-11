# python implementation of DFS traversal of a graph
class Graph:
  # constructor
  def __init__(self, size):
    # use list comprehension to create empty adjacency list and 
    # visited boolean tracker
    self.num_nodes = size
    self.visited = [False for i in xrange(size)]
    self.adj_matrix = [[0 for j in xrange(size)] for i in xrange(size)]
  
  # add edges to the graph
  def add_edge(self, node1, node2):
    self.adj_matrix[node1][node2] = 1

  # dfs algorithm
  def dfs(self, start):
    print(str(start) + " "),
    self.visited[start] = True
    for j in range(self.num_nodes):
      if not self.visited[j] and self.adj_matrix[start][j]:
        self.dfs(j) # recursively visit connected node until return

# ================================
# testing the Graph class with DFS
# ================================

# create graph with 3 nodes
graph = Graph(4)

# add edges with nodes to the graph
graph.add_edge(0,1)
graph.add_edge(0,2)
graph.add_edge(1,0)
graph.add_edge(2,0)
graph.add_edge(2,3)
graph.add_edge(3,2)

# search the graph using dfs algorithm
print("Ajacency Matrix implementation of graph:")
graph.dfs(0)
