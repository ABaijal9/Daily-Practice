#include <iostream>
using namespace std;
    int main () {
        int x;
        cin>> x;
        
        int count = 0;
        
       while(x){

            if( x & 1 == 1){

                count++;
            }

            x >> 1;
        }       

        cout<< 'a' ;
        cout<<count;      
    }