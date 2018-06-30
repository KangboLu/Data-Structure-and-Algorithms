# Linked List

Linked list is has dynamic size with no random access feattures. For accessing a node, iteration to the node position is needed.

## Singly Linked List

A singly Linked List is a collection of nodes collectively
form a linear sequence. 
Each node stores a reference to an object that is an element
of the sequence and a reference to the next object in the sequence.

### functions (based on the python code, c++ is similar):

1. ```is_empty()```: check if the list is empty
2. ```linked_list_status()```: output the empty status
3. ```insert_front()```: insert new node to the front
4. ```insert_back()```: insert new node to the back
5. ```insert_after_value()```: insert after a specific value
6. ```delete_front()```: delete the front of the list
7. ```delete_back()```: delete the back of the list
8. ```delete_list()```: delete the whole list
9. ```delete_specified()```: delete specified vlaue of the list
10. ```search()```: search a specified vlaue
11. ```print_list()```: print the linked list

## Circular Linked List

A circular linked list has the back of the list points to the front of the list to form a circular sequence.
Each node still stores a reference to an node and a reference to the nex object in the sequence. Differently, the list's tail should points to the head in the list.

### functions (based on the python code, c++ is similar):

1. ```is_empty()```: check if the list is empty
2. ```linked_list_status()```: output the empty status
3. ```get_last_node()```: get the location of last node
4. ```append()```: append node to the back of the list
5. ```delete_value()```: delete a specific value
10. ```search()```: search a specified vlaue
11. ```print_list()```: print the linked list