#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool checkleft(int ar[], int pos){
      bool check = true;
  for(int i = 0; i < pos ; i++){
     if(ar[i] >= ar[pos]){
         check = false;
     }
  }
  return check;	
}

bool checkright(int ar[], int pos, int n){
    bool check = true;
for(int i = pos+1; i < n ; i++){
     if(ar[i] <= ar[pos]){
        check = false;
     }
  }
  return check;
}

int main() {

int n;
cin >> n;
int ar[n] ;
 for(int j = 0 ; j < n; j++){
        cin >> ar[j];   }

for(int pos = 1 ; pos < n - 1; pos++){
	if(checkleft(ar, pos) && checkright(ar, pos,n)){
	 cout << ar[pos];
	}
}
}
