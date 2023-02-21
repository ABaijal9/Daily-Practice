#include <iostream>
using namespace std;

bool check(int num){
	for(int i = num + 1; i <=100 ; i++){

		if( m % i == 0 )
			return true; 
	}

    return false;

int main()
{
	for(int s ; s <= 100; s++){
		if (check(s) == true){
			cout << s << " is a prime number";
		}

		else 
		cout << s << " not a prime num"
	}
}