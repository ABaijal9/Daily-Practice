#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int count = 0;

    for(int k = 0 ; k < 32 ; k++){
    	if((1<<k) & n) count++;
    } 

    cout << count << endl;
}