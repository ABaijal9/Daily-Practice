#include <iostream>
 using namespace std;

void checknum(int ar[], int f, int n, int num){

    for(int l = f+1 ; l < n; f++){
            int c = ar[f] + ar[l];
  			if(c == num){
  				cout<<f<<" "<<l<<endl;
  			}
              return;
}
  int main()
   {
  	int ar[100];
  	int n;
  	cin>>n;

  	for(int i = 0; i < n; i++){
  		cin>>ar[i];
  	}

  	int num;
  	cin>>num;

  	for(int f = 0; f < n; f++){
  		chechnum(ar, f , n, num);
  	}
  }