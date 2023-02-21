#include <iostream>
using namespace std;

int add(int arr[], int n){
	int sum = 0;
	for(int i = 0; i < n ; i++){
		sum += arr[i];
	} return sum;
}

int main(){

	int arr[]= {1,2,4,5,6,7};
	int n = sizeof(arr)/sizeof(int);

	cout<<add(arr,n);

}