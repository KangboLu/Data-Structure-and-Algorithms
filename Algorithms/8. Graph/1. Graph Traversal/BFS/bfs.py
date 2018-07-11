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

  # bfs algorithm
  def bfs(self, start):
    # initialize the visisted tracker to false
    for i in self.visited: 
      i = False
    queue = [] # create queue to push vertex
    self.visited[start] = True # make the first vertx visited
    queue.append(start) # push it to queue

    # checking the graph level by level
    while len(queue):
      start = queue[0]
      print(str(start) + " "),
      queue.remove(queue[0])
      
      # scan the list of connected adjacencyList and enqueue it
      for i in self.adj_list[start]:
        if self.visited[i] == False:
          self.visited[i] = True
          queue.append(i)
    print

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
print("Demonstrating BFS algorithm:")
graph.bfs(0)
