#include <iostream>
using namespace std;

int length(char Ar[]){

	// int i = 0;
	// while(Ar[i] != '\0'){
	// 	i++;
	// }

	int i;
	for(i = 0 ; Ar[i] != '\0' ; i++){}
	return i;
}

char append(char A[], char B[] , int i , int j){
	// int i = length(A);
	// int j = length(B);
	int k = 0;

	while(k <= j){
		A[i] = B[k];
		i++;
		j++;
	}
	// return A;
}


int main()
{
	char A[100] = "nice";
	char B[] = "good";

	cout << length(A) <<endl;
	cout << length(B) << endl;

	append(A, B, length(A), length(B) );
	cout<< A;
	return 0;
}