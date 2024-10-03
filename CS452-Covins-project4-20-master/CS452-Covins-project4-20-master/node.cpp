#include "node.h"

Node::Node() {
	parent = NULL;
	for(int i=0; i<3; i++) {
		value[i] = 0;
		child[i] = NULL;
	}
	
} //end default constructor

Node::Node(int val0, int val1, int val2) {
	parent = NULL;
	value[0] = val0;
	value[1] = val1;
	value[2] = val2;
	
	for(int i=0; i<3; i++) {
		child[i] = NULL;
	}
} //end constructor


void Node::setParent(Node a) {
	parent = a;
} //end setParent()

void Node::setLChild(Node a) {
	child[0] = a;
} //end set left child

void Node::setRChild(Node a) {
	child[2] = a;
} //end set right child

void Node::setMChild(Node a) {
	child[1] = a;
} //end set middle child

int Node::actualNumChildren(){
	 numChilds =0;
	for(int i =0;i <3; i++){
		if(child[i] != nullptr){
			numChilds++;
		}

	}
	return numChilds;
}
bool Node::numChildren(){
	if(actualNumChildren()>0)
		return true;
	return false;
}


Node::~Node() {
	for(int i=0; i<3; i++) {
		child[i] = NULL;
	}
	parent = NULL;
} //end deconstructor