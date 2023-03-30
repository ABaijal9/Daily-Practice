#include <iostream>
using namespace std;

int fibonaccinthrec(int n){
	if(n == 0){
		return 0;
	}
	if(n == 1){
		return 1;
	}

	if( n < 0){
		return -1;
	}
	int num = fibonaccinthrec(n-1) + fibonaccinthrec(n-2);
	return num;
}

int main(){

	int till;
	cin >> till;

	cout << fibonaccinthrec(till);


}
