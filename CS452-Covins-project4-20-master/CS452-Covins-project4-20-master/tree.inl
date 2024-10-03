
Tree::~Tree() {
	while (root != NULL)
		deleteNode(root->data);
} // end destructor





void Tree::inOrderHelper(NodePtr curr) const {
	if (curr == NULL)
		return;
	inOrderHelper(curr->left);		// traverse the left subtree
	for(int i = 0; i < curr.actualNumChildren(); i++){
		cout << curr->value[i] << ' ';	
	}
	inOrderHelper(curr->middle);
	for(int i = 0; i < curr.actualNumChildren(); i++){
	cout << curr->value[i] << ' ';	
	}
		// process the node
	inOrderHelper(curr->right);	
	for(int i = 0; i < curr.actualNumChildren(); i++){
	cout << curr->value[i] << ' ';	
	}
		// traverse the right subtree
} // end inOrderHelper




/*struct Node {
    int value;
    Node* left;
    Node* middle;
    Node* right;
};

void printNodes(Node* root) {
    if (root == nullptr) {
        return;
    }
for(int i = 0; i < curr.actualNumChildren(); i++){
	cout << curr->value[i] << "";	
	}
    

    if (root->left != nullptr) {
        printNodes(root->left);
    }

    if (root->middle != nullptr) {
        printNodes(root->middle);
    }

    if (root->right != nullptr) {
        printNodes(root->right);
    }
}
*/