#include <iostnuream>
using namespace std;

bool check(int num){
	for(int i = num + 1; i <=100 ; i++){

		if( m % i == 0 )
			return true; 
	}

    return false;
}

int main(){

	for (int num = 1; num <= 100 ; num++){
        check(num) ? cout << num << " is not a prime number" : cout << num << " is a prime number";
        cout << endl;
    }
}