#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// reverseastring(char ar);

void printarray(int ar[], int n){

	for (int i = 0; i < n; i++){
		cout<< ar[i] << " "; 
	}

    cout<< endl;
}

void reversearray(int *ar , int n){
	int i = 0, j = n-1;
	while(i < j){
		swap( *(ar + i), *(ar + j));
		i++; 
		j--;
	}

}

int main(){

	int n= 6;
	int ar[n] = {3,4,2,1,6,7};

	printarray(ar , n);
	reversearray(ar , n);
	printarray(ar , n);

}
