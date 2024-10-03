#ifndef PROJECT4_NODE_H
#define PROJECT4_NODE_H

#include <stdlib.h>
#include <iostream>

using namespace std;




int numChilds =0;

class Node {
private:

    Node * parent;
    int value[3];
    Node * child[3];
    Node * left;
		Node * right;
		Node * middle;

public:
    Node(int val0, int val1, int val2);
    //val0 left val1 middle and val2 is right
    bool numChildren();
    void absorb(Node * newChild);
    void discard(Node * removeChild);
    int actualNumChildren();
	
	void setParent(Node a);
	void setLChild(Node a);
	void setRChild(Node a);
	void setMChild(Node a);
	
	
};

#endif