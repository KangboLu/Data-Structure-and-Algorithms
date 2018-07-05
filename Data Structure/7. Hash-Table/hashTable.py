# 1. Create a dictionary:
# using curly braces
my_dictionary =	{
  "apple": "a red fruit",
  "banana": "a yellow fruit",
  "cat": "a mammal"
}

# or using the dict() constructor
my_dictionary = dict(apple="a red fruit", banana="a yellow fruit", cat="a mammal")

# 2. Access, Add, Modify, Delete dictionary value
# specify a key to access the value
my_dictionary['apple'] # return 'a red fruit'

# add a new key-value pair to the dictionary
my_dictionary['pear'] = 'a fruit' # now the dictionary will have a key-value pair

# using a given key to modify value
my_dictionary['apple'] = 'red' # the value of key 'apple' is now 'red'

# deletion
del my_dictionary['cat']; # remove entry with key 'cat'
my_dictionary.clear();     # remove all entries in dict
del my_dictionary ;        # delete entire dictionary