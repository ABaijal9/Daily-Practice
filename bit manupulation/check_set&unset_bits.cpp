#include <iostream>

using namespace std;

int main(){
	int a, count = 0;
	cin>>a;
	int m = 1;

	while(a>0){   //while(a) --> this is also right
	if((a & m) == 1){
		count++;
	}		
	a = a >> 1;
	}
	cout<<"set bits: "<<count<<endl;
	return 0;
}