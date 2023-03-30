// Utopian Tree

#include<iostream>
using namespace std;
//linked list class
class node{
	public:
	int data;
	node* next;

	//default constructor
	node(int d){
		data = d;
		next = NULL;
	}
};

 void insertatfront(node* &head, node* &tail, int data){  //insert at head

 	node* n = new node(data); //creating in heap memory 

 	if(head == NULL){
 		head = n;
 		tail = n;
 	}
 	else{
 		n->next = head;
 		head = n;
 	}
 }

 int lengthofll(node* head){
 	node* temp = head;
 	int count= 0;

 	while(temp != NULL){
 		count++;
 		temp = temp -> next; 
 	}
 	return count;
 }

 void insertatend(node* &head, node* &tail, int data){   //insert at tail

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
 void insertatanypoint(node* &head, node* &tail, int data, int position){
 	if(position == 0){
 		insertatfront(head, tail, data);
 	}
 	else if(position >= lengthofll(head)){
 		insertatend(head, tail, data);
 	}
 	else{
 		node* temp = head;
 		for(int jump = 1; jump <= position-1; jump++){
 			temp = temp->next;
 		}
 		node* n = new node(data);
 		n->next = temp->next;
 		temp->next= n;
 	}
 }


 void printll(node* &head){  //only using head
	node* temp = head;  //using third variable 
	while(temp != NULL){
		cout << temp->data << " ";
		temp = temp->next;
	}
}	

int main(){

	node*head = NULL, *tail = NULL;

	insertatfront(head, tail,2);
	insertatfront(head, tail,3);
	insertatend(head, tail,9);
	insertatend(head, tail,5);
	insertatanypoint(head, tail,6,3);
	printll(head);	

}