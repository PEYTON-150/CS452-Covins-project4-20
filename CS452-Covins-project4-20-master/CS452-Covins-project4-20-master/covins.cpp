#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <iomanip>
#include <time.h>
using namespace std;
#include "tree.h"

int main(){
    
    ifstream treeBaby;
    Tree test;

    treeBaby.open("nodeTree.txt");
    while(!treeBaby.eof()){
        
    }
    

    Node a(17, 28, 39);
    Node b(3, 8, 17);
    Node c(21, 0, 28);
    Node d(33, 0, 39);

    a.setLChild(b);
    a.setMChild(c);
    a.setRChild(d);

    b.setParent(a);
    c.setParent(a);
    d.setParent(a);



    return 0;
}