//STOCK SPAN
//5
// 30
// 35
// 40
// 38
// 35
#include<iostream>
#include<stack>
using namespace std;

 int stockspan(stack <int> stack){
 	
    //base case
    if(stack.size() == 1){
    	int count = 1;
    	cout << count << " ";
        // cout << "a";
    	return count;
    }

    //rec case
    int ele = stack.top();
    stack.pop();
    int count = stockspan(stack);
    // cout << count;
    if(ele > stack.top()){       
    	cout<< ++count << " ";	
    }
    else{   
    	count = 1;
    	cout << count << " ";
    }
    stack.push(ele);
    return count;
 }
int main() {
	int N;
	cin >> N;

	stack<int> stack;
	for( int i = 1 ; i <= N; i++){
        int t;
		cin >> t;
		stack.push(t);
		// cout <<  stack.top() << " "; 
	}

    // 	for( int i = 0 ; i < N; i++){
    // 		int ele = stack.top();
    // 		cout <<  ele;       
	// 	    stack.pop();
	// }

	// int count = 1;
	stockspan(stack);
    cout <<  "END"; 
   
}
