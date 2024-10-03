#ifndef PROJECT4_TREE_H
#define PROJECT4_TREE_H

#include <stdlib.h>
#include <iostream>
using namespace std;
#include "node.h"

class Tree {


    Node * root;
    
void inOrderHelper(Node * curr) const;

public:
   Tree();
   Node * search(int valToFind);
   bool insert(int valToAdd);
   bool delet(int valToKill);
   void printinOrder(){inOrderHelper(root);}


};

#endif