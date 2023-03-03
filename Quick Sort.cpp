// #Quick Sort
#include<iostream>
using namespace std;

void printarray(int* ar, int n){
	for(int i = 0 ; i < n; i++){
		cout << ar[i] << " ";
	}
	cout<< endl;
}

int creatpartition(int* ar, int s, int e){

	int i = s-1;
	for(int j = s ; j <= e-1; j++ ){
	if(ar[j] <= ar[e]){
		i++;
		swap(ar[j], ar[i]);  
	  }
	}
	swap(ar[i+1], ar[e]);
	return i+1;
	}

void QuickSort(int* ar, int s, int e){
          
	//base case
	if(s >= e){
	   return;
	}

	//recursive case
	int p = creatpartition(ar, s, e);
	QuickSort(ar, s, p-1);
	QuickSort(ar, p+1, e);

	}

int main(){

    int n = 7;
	int ar[n] = {7,5,1,4,2,6,3};

	printarray(ar, n);
	QuickSort(ar, 0, n-1);
	printarray(ar, n);

	
}