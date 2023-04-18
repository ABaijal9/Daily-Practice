#include <iostream>
using namespace std;

int rook(int i , int j ){
    //base
    if(i == 0 and j == 0){
        return 1;
    }
    //rec

           int ans = 0;
    for(int a = 0 ; a < i; a++){     
            ans = ans + rook(a,j);
            // cout << ver << " ";
    }
         for(int b = 0 ; b < j; b++){
             ans = ans + rook(i,b);
            //  cout << hor << " ";
    }

    return ans;
}
int main() {
    int i , j;
    cin >> i >> j;

    cout << rook(i , j);
}
