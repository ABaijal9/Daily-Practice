#include <iostream>
 using namespace std;
  int main(){

  	int ar[100];
  	int n;
  	cin>>n;

  	for(int i = 0; i < n; i++){
  		cin>>ar[i];
  	}

  	int target;
  	cin>>target;

  	for(int f = 0; f < n; f++){
  		for(int l = f+1 ; l < n; f++){
  			int c = ar[f] + ar[l];
  			if( c == target){
  				cout<<f<<" "<<l<<endl;
  			}
  	}

  	}


  }