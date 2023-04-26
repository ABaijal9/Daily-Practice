//QUEUE FOR LINKED LIST

#include<iostream> 
using namespace std;

class node{ 
    public: 
       int data; 
       node* next; 

       // node(int k)
       // {
       // 	data = k;
       // 	next=NULL;
       // }

       node(int d): data(d) ,next(NULL){}
       };


class Queue{ 
    private: 
    // 	int data; 
       // node* next;
       node* head; 
       node* tail;
   
	public:

	Queue(){
	   head = tail = NULL; //initialize the ll
	}

void Push(int data){
	   node* n = new node(data);
	   if(head == NULL){
	      head = tail = n;	      
	   }
	   else {
	      tail->next = n;
	      tail = n;	      
	   }
	//   delete n;
	} 

void Pop(){
	if(head == NULL){
	    return;
	}
    else if (head->next == NULL){
	    delete head;
	    head = tail = NULL;
	}
	else{
		node* temp = head;
	    head = head->next;
	    delete temp;
	}
	} 
bool Empty(){
	return head == NULL;
	} 
int Front(){
	return head->data;
	} 
	};

int main(){
 
	Queue q;
	q.Push(1);
	// q.Push(2);
	// q.Push(3);
	// q.Push(4);
	// q.Push(5);
	// q.Push(6);
	q.Pop();
	cout << q.Front() << endl;
    if(q.Empty()){
        cout << "empty" << endl;
    }
    else{
        cout << " not empty" << endl;
    }

	
}