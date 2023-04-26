//Kartik Bhaiya And The Celebrity Problem
#include<iostream>
#include<cmath>
using namespace std;

int know(int j , int n , int ar[][50]){

int count = 0 ;

   for(int i = 0 ; i < n ; i++){
    //    cout << i << " ";
      if(ar[i][j] == 1){
      count++;
    //   cout << j;

      }
    //   cout << endl;
    }

if(count > 0){
	return j;
}
else{
    return -1;
}
}

bool not_know(int i , int n , int ar[][50]){
	for(int j = 0 ; j < n ; j++){
    	if(ar[i][j] == 1){
           //  cout << i << " " << j << end;
	    	return false;  		
	    	}
	    }
	return true;   
}

int main(){

int n;
cin >> n;

int ar[n][50];

for(int i = 0 ; i < n; i++){
	    for(int j = 0 ; j < n; j++){
	       cin >> ar[i][j];  
        }
}
int pos = -1;
for( int i = 0 ; i < n; i++){
	 pos = know(i, n , ar);  
		if(not_know(i , n , ar) and pos >= 0){             
           break;
        }

}
   if( pos == -1){
       cout << "No Celebrity";
   }else{
       cout << pos <<endl;
   }
      
}