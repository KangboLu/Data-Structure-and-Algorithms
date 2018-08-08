# Searching Algorithms

## 0. Linear Search 

**Linear Search** is search the target element from left to right in O(n) time.

## 1. Binary Search

**Binary Search** is an O(logn) algorithm that search from the mid-location and recursive or iteratively search
the half that includes the target.

## 2. Depth First Search (DFS)

**DFS** is a graph traversal algorithm.
DFS traverses down branch until visited. If visited, DFS will go up traverse another branch.
Time Complexity: O(|V| + |E|), where |V| is number of vertices, |E| is number of edges

## 3. Breadth First Search (BFS)

*BFS* traverses the graph level by level.
It obtains a visited array like how I implement the dfs algorithm.
Time Complexity: O(|V| + |E|), where |V| is number of vertices, |E| is number of edges