# Linked lists


## Big O

### Adding an node to the end of a linked list

To do that you need to:

1. Add a node to the end, by making the last node point to the new last node

2. Make so that tail also points to the new tail node 

n here is the number of nodes on the list. So here time complexity is O(n).

### Removing an node from the end of a linked list

To do that you need to:

1. Set the tail back to the penultimate node of the list

2. Set the tail node pointer to null

However to set the tail variable we must get the pointer coming from penultimate - 1.

To get this pointer we actually need to iterate through the whole list.

Thus this operation is O(n).

### Adding an node to the beginning of a linked list

1. Set the new node to point to the node pointed by the head 

2. Set the head to point to the new node

So this is O(n)

### Removing an node to the beginning of a linked list

1. Move the head to the rightnext node

2. Remove the unused node

This is also O(1)


### Adding an node to the an arbitrary point of a linked list

1. Iterate from the head through the linked list until we get to the desired node

2. Take the pointer of the desired node, set the pointer of the new node to equal it 

3. Set the pointer of the desired node to the new node

This is O(n)

### Removing a node from an arbitrary point of a linked list

1. Iterate from the head through the linked list until we get to the desired node

2. Set the pointer from the desired - 1 to desired + 2

3. Remove the desired node

This is also O(n)

### Return the value of the node by index and by value 

1. We must iterate through the list to find the value, because it is not contiguous if looking for index

2. Regular value search also causes the need for the list to be iterated through

thus the complexity is O(n)

## Linked Lists and Vectors

Even though linked lists are compared to vectors, there are two main differences:

1. They aren't contiguously allocated in memory 

2. A linked list has a variable, head which points to its beginning

3. A linked list has a variable, tail which points to its end

5. Each nod points to the next

6. The last node points to nullptr

This implies that we can't use indexes to access linked lists via O(1) operations.

It is also the case that:

- Vectors remove the last item less expensively than linked list

- Linked list add and remove items less expensively from the beginning
