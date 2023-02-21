#include<iostream>
using namespace std;
int main() {
	int n=5;
	// reading array
	int ar[n] = {1,2,3,2,1};
	int ans = 0;
	for(int j=0; j<n; j++){
		ans = ans ^ ar[j];
	}

	cout<<ans<<endl;

}