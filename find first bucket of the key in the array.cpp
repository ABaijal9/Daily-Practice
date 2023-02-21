#include<iostream>
using namespace std;

//find 1st bucket of key present in the array or not present

int presentornot(int* ar, int n, int key, int i){

//BASE CASE

	if(i == n){
		return -1;
	}

// RECURSIVE CASE

	if(ar[i] == key){
		return i;
	}

//array will be same through out 
//we'll iterate thats way i+1 for bukets
	return presentornot(ar,n,key, i+1);
}

int main(){

	int n = 9;
	int ar[n] = {3,4,5,6,1,2,41,6,7,6};
	int key = 6;
	int i = 0;
	if(presentornot(ar,n,key,i) == -1){
		cout << "no, key is not present" ;
	}
	else {
		cout << "yes key is present at " << i;
	} 

}