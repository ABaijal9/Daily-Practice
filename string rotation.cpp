#include <iostream>
using namespace std;

int length(char Ar[]){

	int i = 0;
	while(Ar[i] != '\0'){
		i++;
	}

	return i;
}

char* rotate(char str[], int n ){
  
  cout<<"nice" << endl;
  int i = 0, j = 0; 
  int count = 0;
  char first = 0;

  while (count != 3){
  	cout<<"pot" << endl;
  for(int i = n-1; i >= 0; i--){

  first = str[i];  // assign value to 3rd vairable
  str [i] = str [i-1]; // move 1 step
  }

  str[j] = first;  // assign value from 3rd vairable
  count++;  
  j++;
  }
}

// void print(char Ar[]){

// 	cout<< "hot";

//    for(int i = 1 ; i != '\0'; i++){

//       cout<<Ar[i];
//       cout<< "jj";
//    }
 
   // }     

int main(){
	char str[100] = "Baijal";
	int n = 6;

	// char* ans = rotate(str, n);
	// // print(ans);

	rotate(str, n);
	// for(int i = 0; i != '\0' ;i++)
      cout<<str;
  // cout<< "jj";
   } 
