#include<iostream> 
using namespace std;

int power(int n , int pow){
	
	//base case

	if ( pow == 0){
	return 1;
	}

	// recursive case

	return n * power ( n , pow-1);
}


int main(){
	
	int n , pow;
	cin >> n >> pow;

	cout << power(n , pow);
}