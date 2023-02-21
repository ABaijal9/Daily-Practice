#include <iostream>
using namespace std;

bool check_sorted(int ar[] , int n){

	if ( n == 1){
		return true;
	}

if ( check_sorted(ar,n-1) == true && ar[n-2] <= ar[n-1]){
  return true;
}
return false;  
}

int main(){

	int n = 5; // total elements
	int k = 0; // first element
	int ar[] = {3,4,5,9,12,9};

	if (check_sorted(ar,n) == true){
		cout << " sorted";
	}
	else cout << "not sorted";

}