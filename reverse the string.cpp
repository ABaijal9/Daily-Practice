//Reverse each word in a given string

#include <iostream>
#include <string.h>

int index = 0;

using namespace std;

int length(char Ar[]){      //function to tell length of string

	int i = 0;
	while(Ar[i] != '\0'){
		i++;
	}
	return i;
}

char* reverse(char* str, int n){   // reverses the entire string

int j = n-1;
int i = 0;

while(i<j){
swap(str[i++],str[j--]);
}
}

int count_dot(char* A, int k){  // to count 'dots'
	int d = 0;
	for(int i = 0 ; i < k ; i ++){
		if (A[i] == '.'){
			d++;
		}
	}
	return d;
}


char* pickSubarray(char A[], char word[], int pos, int j) { // get sub word
	
	int t = 0;  
	for( int a = pos; a<= j ; a++){
		word[t] = A[pos];
		t++;
	}
	cout<< word << endl;
	cout << A << endl;
   return word;
} 

string* put_to(string* s, char* word){ // copy in B

	s[index] = word;
	index++;

	return s;
}

int main(){
	
char A[] = "My.name.is.Khan";
	int k = length(A);
	cout<< k << endl;;

	reverse(A, k);

	cout << A << endl;

	int i = k-1;
	int j = k-1;
	cout << i << " " << j << endl;
		// int a = 0;

	// int d = count_dot(A, k);
	// cout << d <<endl ;

	// string s[d+1];

	    while(i >= 0 ){

	     if(A[i] == '.'){

	     	cout << i << " " << j << endl;

	     	int len = j - i;
	     	int	pos = i + 1;
	     	cout << len << " " << pos << endl;


	     	char word[len+1 =  

	     	// pickSubarray(A, word, pos, j);// to get word
	     	cout<< word << endl;
	        // put_to(s, r); //add it in B string
	          j = i-1;
	      }     
	      i--;
	}	
	// cout << s ;
}