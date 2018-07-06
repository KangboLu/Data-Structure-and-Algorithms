# python implementation of trie
class Node:
  # constructor
  def __init__(self):
    self.children = [None] * 26
    self.isEOW = False # True if is the end of the word

# trie class
class Trie:
  # constructor
  def __init__(self):
    self.root = self.getNode()

  # return a new trie node
  def getNode(self):
    return Node()

  # convert character to index
  def char_to_index(self, char):
    # using lowercase 'a' to 'z'
    return ord(char) - ord('a')
  
  # insert a word into the trie
  def insert(self, word):
    current = self.root
    for level in range(len(word)):
      index = self.char_to_index(word[level])

      # if current char not present
      if not current.children[index]:
        current.children[index] = self.getNode()
      current = current.children[index]
    
    # mark last node as leaf
    current.isEOW = True
  
  # search a given word
  def search(self, word):
    current = self.root
    for level in range(len(word)):
      index = self.char_to_index(word[level])
      if not current.children[index]:
        return False
      current = current.children[index]
    return current != None and current.isEOW

# ======================
# testing the Trie class
# ======================

words = ["the", "a", "there", "answer", "any", "by", "bye", "their"]
output = ["Not present in trie", "Present in tire"]
 
# Create a Trie object
t = Trie()
print("- Trie object created!")
print

# Construct trie
for word in words:
    t.insert(word)
print("- Words inserted!")
print

# Search for different keys
print("- Search for different words")
print("{} ---- {}".format("the",output[t.search("the")]))
print("{} ---- {}".format("these",output[t.search("these")]))
print("{} ---- {}".format("their",output[t.search("their")]))
print("{} ---- {}".format("thaw",output[t.search("thaw")]))