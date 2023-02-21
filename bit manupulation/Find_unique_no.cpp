#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
    int num;
	int ans = 0;
    
	for(int i=1; i <= n; i++){
		
		cin>>num;
		ans = ans ^ num;
	}

	cout<<ans;

}