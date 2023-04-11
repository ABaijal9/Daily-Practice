#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int d){
        data = d;
        next = NULL;
        prev = NULL; 
    } 
};

void printLL(node* head){
	node* n = head;
	while(n != NULL){
		cout<< n->data << " ";
		n = n->next;
	}
    cout << endl;
}

void createLL(node* &head, node* &tail, int d){
node* n = new node(d);
  if(head == NULL){
  head = n;
  tail = n;
  }
  else{
   n->prev = tail;
   tail->next = n;
   tail = n;
  }
}

int main(){

    int k;
    cin >> k;
    node* head = NULL;
    node* tail = NULL;

    while(d != -1){    
        int d;
        cin >> d;
        createLL(head, tail, d); 
    }
    
    printLL(head);
    
    node* jump = tail;
    for(int i = 0 ; i <= k ; i++){
    jump = jump->prev;
    }

    cout<< jump->data;

}