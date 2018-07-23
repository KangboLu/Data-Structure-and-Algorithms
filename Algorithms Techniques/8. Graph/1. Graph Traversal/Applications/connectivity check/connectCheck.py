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
    # print(str(start) + " "), # use it for debug
    self.visited[start] = True
    for node in self.adj_list[start]:
      self.dfs(node) # recursively visit connected node until return
  
  # check the connectivity
  def connect_check(self, start):
    self.dfs(start)
    for b in self.visited:
      if not b:
        return False
    return True

# output the grahp connectivity status
def connect_status(b):
  if not b: print("Graph not fully connected!")
  else: print("Graph is fully connected!")

# =================================
# testing the connectivity of graph
# =================================

# create graph with 4 nodes
graph1 = Graph(4)

# add edges with nodes to the graph
graph1.add_edge(0,1)
graph1.add_edge(0,2)
graph1.add_edge(1,0)
graph1.add_edge(2,0)
graph1.add_edge(2,3)
graph1.add_edge(3,2)

# search the graph using dfs algorithm
print("- Testing connectivity for graph1:")
connect_status(graph1.connect_check(0))
print

# create graph with 5 nodes
graph2 = Graph(5)

# add edges with nodes to the graph
graph2.add_edge(0,1)
graph2.add_edge(0,2)
graph2.add_edge(2,0)
graph2.add_edge(2,1)
graph2.add_edge(3,4)
graph2.add_edge(4,3)

# search the graph using dfs algorithm
print("- Testing connectivity for graph2:")
connect_status(graph2.connect_check(0))