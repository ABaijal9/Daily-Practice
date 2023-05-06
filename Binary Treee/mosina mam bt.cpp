//binary trees

#include <iostream>
#include <queue>
using namespace std;

//8 10 1 -1 -1 6 4 -1 -1 7 -1  -1 3 -1 14 13 -1 -1 -1
class node{
public:
	int data;
	node* left;
	node* right;

	node(int d){
		data = d;
		left = NULL;
		right = NULL;
	}
};

node* createtree(){
    int data;
    cin>>data;

    if(data == -1){
	    return NULL;
       //node* root = NULL; //it will occupy space so directly return NULL
    }
    else{
      node* root = new node(data);
      root->left = createtree();  //left of root
	  root->right = createtree();
	  return root;
    }
}

void preoder(node* root){
	
	if(root == NULL){
		return;
	}
		cout << root->data << " ";
		preoder(root->left);
		preoder(root->right);
}

void inoder(node* root){
	
	if(root == NULL){
		return;
	}
		inoder(root->left);
		cout << root->data << " ";
		inoder(root->right);
}

void postoder(node* root){
	
	if(root == NULL){
		return;
	}
		postoder(root->left);
		postoder(root->right);
		cout << root->data << " ";
}

int countnodes(node* root){
	//base
	if( root == NULL){
		return 0;
	}
	//rec
	return countnodes(root->left)+countnodes(root->right) + 1;
}

int height(node* root){
	//base
	if( root == NULL){
		return 0;
	}
	//rec
	return max(height(root->left),height(root->right)) + 1;
}

int diameter(node* root){
	//base
	if(root== NULL){
		return 0;
	}
	//rec
	int op1 = diameter(root->left);
	int op2 = diameter(root->right);
	int op3 = height(root->left) + height(root->right);

	return max(op1, max(op2, op3));
}

node* buildtreelevelwise(){
	cout << " Enter the data of the node: ";
	int data;
		cin >> data;
	if(data == -1){
		return NULL;
	}
//else
	node* root = new node(data);
	queue <node*> q;
	q.push(root);

	while(!q.empty()){
		node* x = q.front();
		q.pop();
		cout << "Enter the Left and Right Child of the node " << x->data << " :";
		int ld, rd;
		cin >> ld >> rd;
		if(ld != -1){
			x->left = new node(ld);
			q.push(x->left);
		}
		if(rd != -1){
			x->right = new node(rd);
			q.push(x->right);
		}
	}
	return root;
}

void printlevelwise1(node* root){
	if(root == NULL){
		return;
		//return NULL;
	}
	//else
	queue<node*> q;
	q.push(root);
	q.push(NULL);

	while(!q.empty()){

		node* x = q.front();
		q.pop();

		if(x == NULL){
			cout<<endl;
			if(!q.empty()){
				q.push(NULL);
			}
		}
		else{
			cout << x-> data << " ";
			if(x->left != NULL){
				q.push(x->left);
			}
			if(x->right != NULL){
				q.push(x->right);
			}
		}
	}
}

int preord[]={8,3,1,6,4,7,10,14,13};
int inord[]={1,3,4,6,7,8,10,13,14};

node* buildusing_pre_in(int s, int e, int &i){

	//base
	if( s>e){
		return NULL;
	}

	//rec
	int x = preord[i];
	i++;

	node* root = new node(x);
	int k;
	for(k = s ; k <=e ; k++){
		if( inord[k] == x){
			break;
		}
	}

	root->left = buildusing_pre_in( s, k-1, i);
	root->right = buildusing_pre_in(k+1 , e, i);
	return root;
}

node* insertBST(node* root, int d){
	//base case
	if(root == NULL){  //case 3: create 
		root = new node(d);
	}
	//rec case
	// case 1: more than root data
	else if(root->data <= d){
		root->right = insertBST(root->right, d);

	}
	else{ // CASE 2: less than root data
		root->left = insertBST(root->left, d);
		}

	return root;
		

}

node* buildBST(){
	int data ;
	cin >> data;
	node* root = NULL;

	while(data != -1){
		root = insertBST(root, data);
		cin >> data;
	}
	return root;
}

bool searchBST(node* root, int key){
	//base
	if(root == NULL){
		return false;
	}

	//rec
	if(root->data == key){
		return true;
	}
	else if(root->data > key){
		return searchBST(root->left, key);
	}
	else{
		return searchBST(root->right, key);
	}
}
class Pair{
	public:
		int height;
		int diameter;
		Pair(){
			height = 0;
			diameter = 0;
		}
};

Pair diameterion(node* root ){
	Pair P;
	//base call
	if(root == NULL){
		return P;
	}
	//rec call
	Pair left = diameterion(root->left);
	Pair right = diameterion(root->right);

	P.height = max(left.height , right.height) + 1;

	int op1 = left.diameter;
	int op2 = right.diameter;
	int op3 = left.height + right.height;
	P.diameter = max(op1, max(op2,op3));

	return P;
}

int main(){
 // node* root1 = createtree();

	// node* root2 = buildtreelevelwise();
 
	// int n=sizeof(preord)/sizeof(int);
	// int i = 0;
	// node*root= buildusing_pre_in(0, n-1, i);

	node*root=  buildBST();  // 8 10 1 6 4 7 3 14 13 -1
	printlevelwise1(root);

	int key ;
	cin >> key;
	if(searchBST(root,key)){
		cout << "present" ;
	}
	else{
		cout << "not present";
	}

	Pair ans = diameterion(root);
	cout << "overall height: " << ans.height << endl;
	cout << "overall diameter: " << ans.diameter << endl;


    // preoder(root2);
    //     cout << endl;
    // inoder(root2);
    //     cout << endl;
    // postoder(root2);
    //     cout << endl;
    // cout << countnodes(root2);
    //     cout << endl;
    // cout << height(root2);
	//     cout << endl;
    // cout << diameter(root2);
}