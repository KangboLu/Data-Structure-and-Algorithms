# 1. Create a dictionary:
# using curly braces
my_dictionary =	{
  "apple": "a red fruit",
  "banana": "a yellow fruit",
  "cat": "a mammal"
}

# or using the dict() constructor
# my_dictionary = dict(apple="a red fruit", banana="a yellow fruit", cat="a mammal")

print("- Output the dictionary")
print(my_dictionary)
print

# 2. Access, Add, Modify, Delete dictionary value
# specify a key to access the value
print("- Access value with key=apple")
print(my_dictionary['apple']) # return 'a red fruit'
print

# add a new key-value pair to the dictionary
print("- Add a new key value pair: (pear, a fruit)")
my_dictionary['pear'] = 'a fruit' # now the dictionary will have a key-value pair
print(my_dictionary)
print

# using a given key to modify value
print("- Modify the value with key=apple")
my_dictionary['apple'] = 'red' # the value of key 'apple' is now 'red'
print(my_dictionary)
print

# deletion
print("- Delete the entry with key=cat")
del my_dictionary['cat']; # remove entry with key 'cat'
print(my_dictionary)
print

# remove entries
print("- Remove all entries in the dictionary")
my_dictionary.clear();     # remove all entries in dict
print(my_dictionary)
del my_dictionary ;        # delete entire dictionary