#include <iostream>
using namespace std;
 
int factofnum(int n){
	 
	// if (n == 1){
	//  return ;
	// }

	 if (n == 0 ){
	 return 1;
	 }

	 int num = n * factofnum(n-1);

	 return num;
}

int main(){
	
	int n;
	cin >> n;

	cout << "Factorial of this num: " << factofnum(n);
}