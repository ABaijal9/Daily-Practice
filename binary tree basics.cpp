//BINARY TREE CODE
#include<iostream>
using namespace std;

class node{
public:
	int data;
	node* left, *right;

	node(int d): data(d), left(NULL), right(NULL){

	}
};

node* createtree(){
	node* root =  NULL;
	int data ;
	cin >> data;

	if( data = -1){
	return root; //or return NULL i.e equal to root
	}
	else{
	root = new node(data);
	root->left = createtree();
	root->right = createtree();
	}
	return root;
}

void preorder(node* root){
	if(root == NULL){  //for no root
	return;
	}
	cout << root->data << " " ;
	preorder(root->left);
	preorder(root->right);
}

void inorder(node* root){
if(root == NULL){  //for no root
	return;
	}

	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}

void postorder(node* root){
if(root == NULL){  //for no root
	return;
	}

	postorder(root->left);
	postorder(root->right);
	cout << root->data << " ";
}

int main(){
node* root = NULL;
root = createtree();

cout << "PRE: ";
preorder(root);
cout << endl;
cout << "IN: ";
inorder(root);
cout << endl;
cout << "POST: ";
postorder(root);
cout << endl;

}

// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1