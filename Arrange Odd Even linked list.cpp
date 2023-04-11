#include<iostream>
using namespace std;

class node{
	public:
	int data;
	node* next;

	node(int d){
		data = d;
		next = NULL;}
};

void insertLL(int data, node* &head , node* &tail){

	node* n = new node(data);
	if(head == NULL){
		head = n;
		tail = n;
	}
	else{
		tail->next = n;
		tail = n;
	}
}

void printLL(node* head){
	node* n = head;
	while(n != NULL){
		cout<< n->data << " ";
		n = n->next;
	}
    cout << endl;
}

void insertoddeven(node* &odd, node* &even){
	node* temp = odd;
	while (temp->next != NULL){ // for odd ll	
		temp= temp->next; //for 1 step jump
	}
	 temp->next = even;
}

node* oddll(node* &odd){
	node* temp = odd;   //for jump in real ll
    node* prev = odd;   //for jump in real ll
    node* head = NULL;
    node* tail = NULL;

	while (odd != NULL){ // till it reaches last
       node* n = new node(odd->data);   //creating new node and giving it value
     	if(head == NULL){   //first node
		head = n;
		tail = n;
    	}
    	else{   //rest of the node
		tail->next = n;
		tail = n;
    	}     
		prev = odd; //tranvering in the real loop
		odd = odd->next->next; //for 2 step jump
	}
    return head;
}

node* evenll(node* even){
	node* temp = even;   //for jump in real ll
    node* prev = even;   //for jump in real ll
    node* head = NULL;
    node* tail = NULL;

	while (even->next != NULL ){ // till it reaches last
       node* n = new node(even->data);   //creating new node and giving it value
     	if(head == NULL){   //first node
		head = n;
		tail = n;
    	}
    	else{   //rest of the node
		tail->next = n;
		tail = n;
    	}     
		prev = even; //tranvering in the real loop
		even = even->next->next; //for 2 step jump
	}
    node* n = new node(even->data);
        tail->next = n;
		tail = n;
    return head;
}

int main() {
	int n;
	cin >> n;
	node* head = NULL, *tail = NULL;
	for(int i = 1; i <= n; i++){
		int data;
		cin >> data;
		insertLL(data, head, tail);
	}
    cout << "Original List: ";
    printLL(head);
    node* t = head->next;	
	node* odd = oddll(head);
    node* even = evenll(t);
	 insertoddeven(odd, even);
	cout << "Modified List: ";
    printLL(odd);	
    // printLL(even);
}