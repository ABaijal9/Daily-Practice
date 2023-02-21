#include<iostream> 
using namespace std;


void increasing1(int n){

if (n == 0){
	return;
}
increasing1( n-1); // pehele kum
 n;  // then zayda
}



// void increasing2(int n, int i){

// if (i == 0){
// 	return;
// }
// increasing2( n, i-1); // pehele kum
// cout << i;  // then zayda
// }



void decreasing1(int n){

if (n == 0){
	return;
}

cout << n;  // pehele jayda
decreasing1( n-1); // then kum
}



// void decreasing2(int n, int i){

// if (i == 0){
// 	return;
// }

// cout << i;  // pehele jayda
// decreasing2( n, i-1); // then kum
// }



// increasing and decreasing order print using recursion
int main(){

	int n;
	cin >> n;

	cout << increasing1(n) << endl;
	// cout << increasing2(n, 1) << endl;
	cout << decreasing1(n) << endl;
	// cout << decreasing2(n , n) << endl;
	
}
