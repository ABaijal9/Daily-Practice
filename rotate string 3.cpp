#include <iostream>
#include <string.h>
using namespace std;

	int length(char Ar[]){

	int i = 0;
	while(Ar[i] != '\0'){
		i++;
	}

	return i;
}

int main(){

	int t;
	cin >> t;
	cin.ignore();

	char A[100]; // = "coding_blocks";
	cin.getline(A, 100);
	
	int n = length(A);
	int p = n , e = n;


	// loop 1: right sift
	// loop 2: left allotment
	// loop 3: remove extra part

	while (n >= 0){  // loop 1
		
	 A[n+t] = A[n];
	 n--;
	}

	for( int i = 0 ; i < t; i++ ){   // loop 2
		A[i] = A[p];
		p++;
	}

	while(A[e] != '\0' ){  // loop 3
		A[e] = '\0';
		e++;
		p++;
	}

 	cout << A << endl;
 }