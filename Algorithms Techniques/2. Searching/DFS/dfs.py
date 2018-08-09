# python implementation of DFS traversal of a graph
class Graph:
  # constructor
  def __init__(self, size):
    # use list comprehension to create empty adjacency list and 
    # visited boolean tracker
    self.visited = [False for i in xrange(size)]
    self.adj_list = [ [] for i in xrange(size)]
  
  # add edges to the graph
  def add_edge(self, node1, node2):
    self.adj_list[node1].append(node2)

  # dfs algorithm
  def dfs(self, start):
    # if visited, go back one level
    if self.visited[start]: 
      return 
    print(str(start) + " "),
    self.visited[start] = True
    for node in self.adj_list[start]:
      self.dfs(node) # recursively visit connected node until return

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
print("Demonstrating DFS algorithm:")
graph.dfs(0)
