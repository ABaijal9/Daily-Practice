#include <iostream>
#include <math.h>
using namespace std;

int main(){

	int ar[] = {1 , 2 , 3 ,4 , 5 , 6 , 7 , 8 , 9 , 10};
	int n = sizeof(ar)/sizeof(int);
    int sum[100];
    sum[0] = ar[0]; //alloting position 0

	for(int i = 1 ; i < n ; i++){ //creating sum array
		sum[i] = sum[i-1] + ar[i]; // ar[i-1] == sum[i-1]
	}
	int p = 2;
	int q = 8;
	// cin >> p;
	// cin >> q;

	int max = 0;

	for(int i = 1 ; i < n ; i++){ // ending position loop

		// cout << " nic";
		for(int j = 1 ; j < i ; j++){ // starting position loop
		    // cout << " ttt";
		    int c_sum = sum[i] - sum[j-1]; // 1 : sum of postion (ending - staring)
	       // cout << " lll";
	        	max = max(max , c_sum);
	        }

	}
	}

// 	for( int i = 0; i < n ; i++){
// 		// cout << sum[i] <<" " ;
// 		} 
  // }

	       // cout << " kkkk";
           cout << max;
}


  // int c_sum[20];
	// c_sum[0] = ar[0];

	// for( int i = 1; i < n ; i++){
	// 	c_sum[i] = ar[i] + c_sum[i-1];
	// }


