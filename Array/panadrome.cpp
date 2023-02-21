#include <stdio.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int num=n;

    while(n>0){
        n = n%10;
        int k = k*10 + n;
        n = n/10;
    }

    if(k==num){
        cout<<"Yes";
    }

    else {
        cout<"No";
    }
}