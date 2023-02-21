#include<iostream>
using namespace std;

void bubblesortpurerecursion(int ar[],int n , int i, int j){
	//base case
	if(i == n-1){
	return;
	}

	if(j==n-1-i){
	 bubblesortpurerecursion(ar, n , i+1, 0);
	 cout<< "hey" << i << endl;
}

    else{
    	if(ar[j]>ar[j+1]){
	    swap(ar[j],ar[j+1]);
	    cout<< j << endl;
	}  
}

	//recursion case
	 bubblesortpurerecursion(ar, n , i, j+1);
}

// void print(int ar[], int n, int i){

// 	if (ar[i] == n);
	
// 	if (ar[i] < n)
// 	cout<< ar[i];
    
//     print(ar, n ,i+1);
// }

int main(){
	int n = 5;
	int ar[n] = {5,4,3,2,1};
    cout << "n" << n << endlc;out << n << endl; 
	bubblesortpurerecursion(ar, n , 0, 0);
	// print(ar, n, 0);
	cout << "n" << n << endl; 
	for(int i = 0; i < n; i++){
		cout<< ar[i];
	}

}