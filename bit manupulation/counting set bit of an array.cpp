#include<iostream>
using namespace std;

int count_setbit(int n){

	int count = 0; // count initialization

	while(n != 0){

		if((n & 1) != 0){   //counting 1
			count++;
		}

		n >> 1;  //right shift operation
	}

	return count;
}

int main(){

	int n = 5;
	// cin << n;

	int ar[n+2];

	for(int i = 0 ; i <= n+1 ; i++){  // to create new array
		ar[i] = i;
	}

	int ans[n+2];

	for(int  j= 0 ; j <= n+1 ; j++){ //to create set bit sount array by position
		ans[j] = count_setbit(j);
	}

	for(int t = 0 ; t <= n+1 ; t++){ //to print set bit count array
		cout << ans[t];
	}

}

