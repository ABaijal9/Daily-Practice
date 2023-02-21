#include <iostream>
using namespace std;

int main(){

char str[100] = "AYUSHI";

int n = 6 ;// length(str);  //total number of string
int t = 3;   //num to rotate

int p = n-1+t;

//step 1-> increase and copy string

for(int i = n-1 ; i >  t ; i--){
 cout << "ll" << endl;
    str[p] = str[i];
    p--;
    
}

for (int k = 0; k < 6 ; k++){
cout << str[k] ;
}


// step 2 -> pop and push that value in the front

// int index = 3;

// for ( int j = ; j ; j--){

// }
}