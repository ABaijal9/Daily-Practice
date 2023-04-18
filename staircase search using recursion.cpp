#include <iostream>
using namespace std;

void search(int mat[][4], int i , int j , int key){
    //base

    if(i == 4 or j< 0){
        cout << " not found " ;
        return;
    }

    //rec
    if(mat[i][j] == key){
         cout << " found it at " << i << " and " << j;
        return ;
    }
    else if(mat[i][j] < key){
        search( mat , i+1 , j, key);
    }
    else{
        search( mat , i , j-1 , key);
    }
    return;
}

int main() {
   int n , key;
    cin >> n >>key;
    int mat[n][4] = { { 10, 20, 30, 40 },
                      { 15, 25, 35, 45 },
                      { 27, 29, 37, 48 },
                      { 32, 33, 39, 50 } };
 
    search(mat, 0,n-1 , key);
}
