#include <iostream>
using namespace std;
//slection sort

void SelectionSort(int ar[], int n)
{
	for(int i = 0; i < n - 1; i++){  // outter loop starts form 0th box
		for(int j = i+1 ; j < n ; j++){ // inner loop starts from min's next element 
			
			int min = i;

		        if(ar[j] < ar[min]) {   // comparing which is lesser
		        	ar[min] = ar[min] + ar[j] ;  // swapping
	           	 	ar[j] = ar[min] - ar[j];
        		 	ar[min] = ar[min] - ar[j];
	         }
		}
}
}

void printarray(int *ar, int n){

	for (int i = 0; i < n; i++){
		cout<< ar[i] << " "; 
	}

    cout<< endl;
}

int main(){
	int n = 6;
	int ar[n] = {3,4,5,8,2,1};

    printarray(ar, n);
	SelectionSort(ar, n);
	printarray(ar, n);
}