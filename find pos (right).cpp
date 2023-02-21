#include <iostream>
using namespace std;

int main(){
	int ar[] = { 1,2,3,5,6};
	int t = sizeof(ar) / sizeof(int); //6
	int num = 7;


	for(int i = 0; i < t ; i++){
		
		if(ar[i] == num || ar[i] > num ){
			cout << "position is: " << i+1 << endl;
			break;
		}
      }

      if(num > ar[t-1]){
      	cout << "position should be: " << t;
      }
}
    