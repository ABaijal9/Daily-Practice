#include <iostream>
using namespace std;

int fibonacci(int pos){

if(pos == 1){
	return 1;
}

if(pos == 0){
	return 0;
}

if(pos < 0){
	return -1;
}

	return fibonacci(pos-1) + fibonacci(pos-2);
}

int main(){
	
	int pos;
	cin >> pos;

	cout << fibonacci(pos) << endl;

}