#include<iostream>
using namespace std;
void bubblesort(int ar[], int n, int i){

//base case
if(i == n-1){
return;
}

for( int j = 0 ; j <= n-2-i; j++){
if(ar[j]  > ar[j+1]){ //condition
int temp = ar[j+1]; // swapping
ar[j+1] = ar[j];
ar[j] = temp;
}
}

//rec case
bubblesort(ar, n, i+1);
}

void printarray(int ar[], int n){
     
     for(int i = 0; i < n ; i++){
        cout<<ar[i];
        }
        cout << endl;   
}

int main(){
int ar[] = {5,3,6,7,1,2,9};
int n = sizeof(ar)/sizeof(int);

printarray(ar,n);

bubblesort(ar, n, 0);

printarray(ar,n);

}
