#include<iostream>
using namespace std;
int main() {
	int n;
	cin>> n;

	// reading array
	int ar[] = {};
	for(int i=0; i<n; i++){
		cin>> ar[i];
	}

	int ans = 0;
	for(int j=0; j<n; j++){
		ans = ans ^ ar[j];
	}

	cout<<ans<<endl;

}