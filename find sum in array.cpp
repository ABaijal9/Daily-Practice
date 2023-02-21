//13.2.23
//Question2

#include<iostream>
using namespace std;

void checkvalue(int* ar, int l, int value, int i, int j){

value = ar[i] + ar[j];
 for(int k = 0; k < l ; k++){
     if(value == ar[k]){
	   cout << value << " sum of " << ar[i] << " at " <<i <<  " and " << ar[j] << " at " << j << " has been found at " << k+1 << endl;
	}
 }
}

int main()    
{ 
  int ar[] ={3,2,4,5,9,6,3};
  int l = sizeof(ar)/sizeof(int);

  int i = 0; // 1st num
  int j = 0; // 2nd num
  int value = 0; //value to compare with entire array

  for(i; i < l-1 ; i++){

      for(j; j < l-1; j++){
   
      checkvalue(ar, l, value, i , j);
      }
  }
 }