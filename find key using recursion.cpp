#include<iostream>
using namespace std;
//key present or not
bool presentornot(int* ar, int n, int key){
//BASE CASE
	if(n == 0){
		return false;
	}
// RECURSIVE CASE
	if(ar[0] == key){
		return true;
	}
//array will go --> [0,1,2] --> [1,2]
	return presentornot(ar+1,n-1,key);
}

int main(){

	int n = 9;
	int ar[n] = {3,4,5,6,1,2,41,6,7};
	int key;
	cin >> key;

	if(presentornot(ar,n,key)){
		cout << "yes key is present. ";
	}
	else {
		cout << "no, key is not present";
	}

}