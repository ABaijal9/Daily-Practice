#include <iostream>
using namespace std;

//c_sum   

int main(){
    int ar[] = {-5,-3,6,7,8,2,1};
    int n = sizeof(ar)/sizeof(int);
    // int start = 0;
    // int end = 0;
    int c_max = 0;

    for(int i = 0; i < n; i++){
    
      int sum = ar[i]; 
      for(int j = i+1 ; j < n ; j++){
        sum  = sum + ar[j];

        if ( sum > c_max ){
            c_max = sum;
            // start = i;
            // end = n;
        }
    }
}
cout << c_max << " is the highest sum";


}
