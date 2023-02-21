#include <iostream>

using namespace std;

int main(){

	int n;
	cin >> n;

	int num = n;
	int count = 0;

	while(num != 0 ){ // to find kth posotion of the digit
		
		num = num >> 1;
		count++;
		
		}

	int new_num = 1;

	// int new_num = pow(num,count) - 1; //new num
	for(int i = 0; i < count; i++){0
	new_num *= 2;

	}

	new_num --;
	int diff = new_num - n; //difference of new num and old num

	cout << diff;
	cout << new_num << endl;
}