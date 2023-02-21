#include <iostream>
using namespace std;

void count(int a, int b){
	int count = 0;
	int cnt = 0;
	while ( a ){
		if((a & 1) != 0){   //counting set bit of 1st num
			count++;
            a >> 1;
		}

	while ( b ){
		if((b & 1) != 0){   //counting set bit of 2nd sum
			cnt++;
            b >> 1;
		}
		cout<<count + cnt <<endl;
	}

}
}

int main(){

	int n;
	cin >> n;

	for(int i = 0; i <= n; i++){
		int a , b;
		// cin >> a >>b;
		// int bit ;
		count(a, b);
	}
	
}