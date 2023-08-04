#include <iostream>
using namespace std;

struct Node{
int data;
Node* left,*right;

Node(int val) {
	data=val;
	left = NULL;
	right= NULL;
}
	
};

Node* searchInBst(Node* root , int key) {
	if(root == NULL) {
		return NULL;
	}


if(root->data == key) {
	return root;
	
}
//data > key 
if(root->data > key ) {
	return searchInBst(root->left, key );
}

// data< key 
return searchInBst(root->right, key);

}
int main () {
	Node*root = new Node(4);
	root->left = new Node(2);
	root-> right=new Node(5);
	root->left->left = new Node(1);
	root->left->right = new Node(3);
	root->right->right =new Node(6);
	
	if(searchInBst(root,12) == NULL) {
		cout << "key doesn't exist" << endl;
		
	} else {
		cout << " key Kaam Kar raha hai" << endl;
			}
	return 0;
	
	
	
	
}
