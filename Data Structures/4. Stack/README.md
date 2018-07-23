# Stack

A stack is a collection of objects that are inserted and removed according to the *last-in, first-out* (LIFO) principle.
A user may insert objects into a stack at any time, but may only access or remove the most recently inserted object that remains at the “top” of the stack. 
The name “stack” is derived from the metaphor of a stack of plates in a spring-loaded, cafeteria plate dispenser

## Array implementation:

In array implementation of the stack, a dynamic array is used to store and access the stack elements.

### functions (based on the python code, c++ is similar):

1. ```is_empty()```: check if the stack is empty
2. ```peek()```: peek the top of the stack
3. ```push()```: push value into the stack
4. ```pop()```: pop the top of the stack
5. ```size()```: size of the stack
6. ```output()```: output the stack

## Linked List implementation:

In linked list implementation, pushing a value is like insert a new node to the front of the linked list; poping a value is like deleting the head of the linked list.

1. ```is_empty()```: check if the stack is empty
2. ```peek()```: peek the top of the stack
3. ```push()```: push value into the stack
4. ```pop()```: pop the top of the stack
5. ```size()```: size of the stack
6. ```output()```: output the stack