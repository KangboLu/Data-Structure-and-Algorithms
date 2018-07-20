# Queue

A queue is a collection of objects that are inserted and removed according to the *first-in, first-out* (FIFO) principle. That is, elements can be inserted at any time, but only the element that has been in the queue the longest can be next removed.

## Array Queue

In array implementation of queue, the `enqueue()` is done by inserting new element to the back of array. 
`dequeue()` is implemented by removing the front of the array, which is the oldest inserted element.

## Linked List Queue

In linked list implementation of queue, the `enqueue()` is done by inserting new element after the tail of linked list. 
`dequeue()` is implemented by reassigning the head of the array, which is the oldest inserted node.

## Priority Queue

In priority queue, the queue with highest priority is inserted to the front and the queue maintains decrement order of element priority. 

`insert()` is implemented by comparing current priority with exist elements.
`remove()` is implemented by removing the highest priority element.