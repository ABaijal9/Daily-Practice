#include<iostream>
using namespace std;

void indices(int* ar, int i, int n, int key){
    if(i == n){
        return ;
    }
    if(ar[i] == key){
        cout << i <<" " ;
    }
         indices(ar, i+1, n , key);
     return;
}

int main() {
    int n, key;
    cin >> n;
    int ar[n];
    for(int i = 0 ; i < n; i++){
        cin >> ar[i];
    }
    cin >> key;
    indices(ar, 0, n, key);
}