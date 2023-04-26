//stack using 2 queue

#include<iostream>
#include<queue>
using namespace std;

class Stack{
    private:
queue <int> q1;
queue <int> q2;

public:

void pop(){
    if(!q1.empty()){
	while(q1.size() > 1){  //when size is more then 1
	   int ele = q1.front();
	   q2.push(ele);
	   q1.pop();
	}
	//when size is 1
	 q1.pop(); //just remove that 1 top element
}
else{
while(q2.size() > 1){  //when size is more then 1
	   int ele = q2.front();
	   q1.push(ele);
	   q2.pop();
	}
	//when size is 1
	 q2.pop();   //just remove that 1 top element
}
}

void push(int ele){
if(q1.empty() and q2.empty()){
	q1.push(ele);
}
else if ( q2.empty() ){
	q2.push(ele);
}
else{
	q1.push(ele);
}
return;
}

int top(){
if(!q1.empty()){
	while(q1.size() > 1){  //when size is more then 1
	   int ele = q1.front();
	   q2.push(ele);
	   q1.pop();
	}
	//when size is 1
	int top = q1.front();
	 q1.pop();
     q2.push(top);
	 return top;
}
else{
while(q2.size() > 1){  //when size is more then 1
	   int ele = q2.front();
	   q1.push(ele);
	   q2.pop();
	}
	//when size is 1
	int top = q2.front();
	 q2.pop();
     q1.push(top);
	 return top;
}
}

bool empty(){
    if(q1.empty() and q2.empty()){
	     return true;
    }
	else{
	return false;
	}
}
	
};

int main(){
	Stack s;

	s.push(1);
	s.push(2);
	s.push(3);
    
	s.push(4);
    s.push(5);
    s.push(6);

	while(!s.empty()){
	cout << s.top();
    cout << " ";
	s.pop();
	}
    cout << endl;

	return 0;


}