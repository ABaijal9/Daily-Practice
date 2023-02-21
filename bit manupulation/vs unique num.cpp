#include<iostream>
using namespace std;
int main() {
	int n;
	// cin>>n;

	// reading array
	int ar[n] = {1,2,3,2,1,4};
	// for(int i=0; i<n; i++){
	// 	cin>> ar[i];
	// }

	//overall bit
	int temp = 0;
	    for(int j = 0; j < n; j++){
		   temp = temp ^ ar[j];
		   
		}

		cout<<temp<< endl;

    // finding bits for even
    int even_bit = 0;
        for(int k = 0; k < n; k++){
            if( ar[k]%2 == 0){
                even_bit = even_bit ^ ar[k];  //ar[i] ^ ar[i+1]
            }
		}

        cout<<"first number "<<even_bit<< endl;

//     // finding bits for odd
//    int odd_bit = 0;
//         for(int t = 0; t < n; t++){
//             if( ar[t]%2 != 0){
//                 odd_bit = odd_bit ^ ar[t];  //ar[i] ^ ar[i+1]
//             }	   
// 		}

//         cout<<odd_bit<< endl;

//     // now, to find another number we'll take temp bit i.e., overall bit & 
//     //one even or odd bit and do bit of both of them

//     // int second_num = temp ^ even_bit;
//     // cout<<"second number "<<second_num;

    	 }
