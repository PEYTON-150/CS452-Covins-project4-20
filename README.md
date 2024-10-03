Project Objective
Develop a C++ program that implements a sequential 2-3 tree, focusing on the functionality of insertion, deletion, and searching within the tree.
Class Structure:

Node Class
Attributes:
Node *parent: Pointer to the parent node.
int value[6]: Array to hold node values.
Node *child[6]: Array of pointers to child nodes.

Methods:
Node(int val): Constructor to initialize a node with a value.
bool numChildren(): Returns the number of children.
void absorb(Node *newChild): Absorbs a new child node.
void discard(Node *removeChild): Discards a child node.
Tree Class:
Attributes:
Node *root: Pointer to the root node.
Methods:
Tree(): Constructor to initialize the tree.
Node *search(int valToFind): Searches for a value and returns the corresponding node.
bool insert(int valToAdd): Inserts a value into the tree.
bool delete(int valToKill): Deletes a value from the tree.
void print(): Prints the tree structure.

Implementation Steps:
Node Class Creation: Implement the Node class and create nodes either from a text file or manually for testing.
Tree Class Initialization: Set up the Tree class with a root node.
Tree Traversal: Implement a tree traversal method to print the tree, ensuring functionality for testing.
Search Functionality: Write the search function to locate a value. Return 2000 for values greater than the largest in the tree.
Insertion Logic: Implement the insert function, handling both simple and recursive cases, ensuring special handling for values exceeding the current maximum.
Deletion Logic: Develop the delete function, managing simple and complex cases while ensuring thorough testing.

Project Requirements:
Implement all specified functionalities in C++.
Conduct thorough testing for all edge cases during insertion and deletion.
Work individually or in groups of up to two members.
Evaluation Criteria
Correctness and efficiency of the implemented functionalities (30 points each for insert and delete).
Code organization and clarity.
