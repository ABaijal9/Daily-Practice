#include<iostream>
using namespace std;

int ElephantWays(int i,  int j){
    
    //base
    if(i == 0 and j == 0){
       return 1;
    }
    //rec. case
    int ans = 0;
    for(int k = 0; k < i; k++){   //ar[k][j]
        ans += ElephantWays(k, j);
    }
    for(int l = 0; l < j; l++){   //ar[k][j]
        ans += ElephantWays(i, l);
    }
    return ans;
}

int main(){
int i , j;
cin>> i >> j;
cout << ElephantWays(i, j);	
}
