//Queue
#include<iostream>
using namespace std;

class Queue(){
	private:
		int *a= NULL;
		int n , cs;
		int f;
		int r;
	public:
		Queue(int s = 5){
		a = new int[s];
		n = s;
		cs = 0;
		f = 0;
		r = n-1; 
		//initiating it by end element so that after r+1 it goes to first position 
		//from last with the help of fuction and so that it goes in flow by the function
			}

		void Push(int data){
			if(cs < n){
				r = (r+1)%n;
				a[r] = data;
				cs++;
			}
			}

		void Pop(){
			if(cs > 0){
				f = (f+1)%n;
				cs--;
			}
		else
			{
			cout << "Underflow" ;
	     	}
    	}

    	void front(){
    		return ar[f];
    	}
    	bool empty(){
    		return cs = 0;
    	}
};

int main(){

	Queue q;
	q.
}
