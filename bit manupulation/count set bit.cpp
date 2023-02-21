#include <iostream>
using namespace std;

int count_set(int no){    //fuction to check set count

	int count = 0;
		// int p = 1;

		while(no != 0){
			if ((no & 1) == 0){
			count++;
		    }
		    no = no >> 1;
		}
		cout<< count << endl;
}

int main(){

	int n = 3;
	// cin >> n;  // no of inputs


	for(int i = 1; i <= n; i++){ //3
		int num;
		cin >> num;  //inputs intake

		cout<< count_set(num);    //fucntion call
	}


	// for(int i = 0; i <= n; i++){
	// 	cout << num;
	// }

}