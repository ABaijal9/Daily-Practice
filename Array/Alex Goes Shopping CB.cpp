#include<iostream>
using namespace std;

bool check(int* ar, int n, int amt, int count){

int rc = 0 ; //real count 
	
	for(int i = 0 ; i < n; i++){
	    if(amt % ar[i] == 0){
	       rc++;
	        if(rc== count){
	        return true;
	        }
	    }
	}

	return false;
}

int main(){
int n;  //number of items
cin >> n;

int ar[n]; //array for list of items
for(int i=0 ; i<n ; i++){
	cin >> ar[i];
}

int q;   // number of queries
cin >> q;

int amt, count;  //amt--> money you have count--> number of items you can buy
for(int j = 1 ; j <= q ; j++){
	cin >> amt;
	cin >> count;

	if(check(ar, n, amt , count) == true){  
	cout << "Yes" << endl;
	}
	else{
	cout << "No" << endl;
	}
}



}