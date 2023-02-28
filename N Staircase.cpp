#include<iostream>
using namespace std;

int staircase(int n, int k){

//base case
    if( n == 0){
       return 1;  
    }
    if(n < 0){
	   return 0;
    }

//rec case

int sum = 0;
for ( int i = 1; i <= k; i++){
  sum += staircase(n-i, k);
}	
return sum;
}

int main(){
 int n;
 cin >> n >> k;
  
    for( int i = 0; i <= n; i++){
       cout << "total steps for " << i <<" " << staircase(i, k) << endl;
     }
}