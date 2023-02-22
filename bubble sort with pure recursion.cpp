#include<iostream>
using namespace std;

void bubblesortpurerecursion(int ar[],int n , int i, int j){
    //WAY 1: WAY OF MAM
	//base case
	if(i == n-1){
		return;
	}

	//recursion case
	if(j==n-1-i){	
	 bubblesortpurerecursion(ar, n , i+1, 0);	
}

    else{
    	if(ar[j] > ar[j+1]){
	    swap(ar[j],ar[j+1]); 
	}
	
	bubblesortpurerecursion(ar, n , i, j+1);
}
}

void printarray(int ar[], int n){
     
     for(int i = 0; i < n ; i++){
        cout<<ar[i];
        }
        cout << endl;   
}

int main(){

	int ar[] = {5,4,3,2,1};
	int n = sizeof(ar)/sizeof(int);

    printarray(ar,n);
	bubblesortpurerecursion(ar, n , 0, 0);
	printarray(ar,n);

}

// void bubblesortpurerecursion(int ar[],int n , int i, int j){

// 	//WAY 2: CHECK HOW IT IS WORKING
// 	//base case
// 	if(i == n-1){
// 		return;
// 	}

// 	if(j == n){
// 		return;
// 	}
// 	if(j==n-1-i){
// 		// cout<< "bey " << i << " " << j << endl;
// 	 bubblesortpurerecursion(ar, n , i+1, 0);
// 	 // cout<< "hey " << i << " " << j << endl;
// }
//     else{
//     	if(ar[j] > ar[j+1]){
// 	    swap(ar[j],ar[j+1]);
// //      cout<< " here i and j are " << i << " " << j << endl;
// 	}  
// }
// 	//recursion case
// 	 bubblesortpurerecursion(ar, n , i, j+1);
// }