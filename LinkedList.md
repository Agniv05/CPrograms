Linked Lists addresses few of the limitations of the arrays. Example:

insertion or deletion in case of an array is expEnsive(complex position-based)
as arrays are static structures, they cannot be easily extended or reduced
fixed size
one block allocation

Linked list---> A LINEAR DYNAMIC DATA STRUCTURE.
consists of nodes
the nodes consist of the data and the reference(POINTERS) to the next node
th last node(THE FINAL ELEMENT) has a reference to null
the head(entry point into a linked list) is not a node but a REFERENCE TO THE FIRST NODE
if the list is empty, the head is a null reference
the size of the list can change during program execution
it can be made as long as necessary, until memory is depleted
it avoids wastage of memory space but additional memory is required for pointers

NOTE:A null reference, also known as a null pointer, is a reference or pointer that does not point to a valid object or memory location. In other words, it is a reference that has no value or points to nothing.
LINKED LIST IS AN ABSTRACT DATA TYPE
ARRAYS--->simple and easy to use and takes constant time for accessing elements based on indices as it is random access O(1)(takes one multiplication and addition, both of which take a constant time)
DYNAMIC ARRAYS--->random access, variable-size list data structure that allows elements to be added or removed.
LINKED LIST--->takes O(n) to access the elements
----COMPARATIVE STUDY----
Contiguous memory allocation: Dynamic arrays store elements in contiguous blocks of memory, which means that each element is stored next to the previous one in memory.
Fixed-size elements: Dynamic arrays typically store elements of a fixed size, which makes it easy to calculate the memory address of each element.
Random access: Dynamic arrays allow for random access to elements, meaning that you can access any element directly using its index.
Cache-friendly: Dynamic arrays are cache-friendly, meaning that the CPU can efficiently access elements in the array because they are stored in contiguous memory locations.
Resizing: Dynamic arrays can be resized by allocating a new block of memory and copying the elements from the old block to the new block.
