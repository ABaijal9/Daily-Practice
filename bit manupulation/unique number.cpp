#include<iostream>
#include <set>
using namespace std;

int main() {
    
   int n;
   cin >> n ;
// reading array
    int ar[n] = {};

    for(int v = 0 ; v < n ; v++){
            cin >> ar[v];  
        }

//overall bit
    int temp = 0;  
        for(int j = 0 ; j < n ; j++){
            temp = temp ^ ar[j];   
        }
    // cout<< temp << endl;

// find setbits
      int setbit = 0;
      int unsetbit = 0;
      int p = 0;
      for(int i = 0 ; i < n ; i++){
              if ((ar[i] & (1<<p)) != 0){
                  setbit = setbit ^ ar[i];
              }

              else{
                  unsetbit = unsetbit ^ ar[i];
              }
      }
    //   cout << setbit << endl;
    //   cout << unsetbit << endl;
      
     /* now to find first number we'll do --> overall bit ^ setbit 
        (can do unset bit as well) as overall has 2 numbers & 1 will 
        be in setbit which will get even in ^ will be canceled out 
        then we'll find 1st no. and then we'll ^ overall bit with 1st
        to find second no.
    */
             }
      int first_num = temp ^ setbit;
      int second_num = first_num ^ temp;
       cout << first_num <<" "<< second_num;

