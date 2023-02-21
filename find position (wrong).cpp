#include <iostream>
using namespace std;

int main(){
	int ar[] = {1,2,3,5,6};
	int n = sizeof(ar) / sizeof(int);
	int key = 4; // key to find
	int t = n+1;
	int new_ar[t]; // new array

	// to find key in the array

	for(int i = 0; i < n; i++ ){
		if( ar[i] == key){
			cout<<"present"<< endl;
			cout<<"The position is: " << i+1 << endl;
			break;
		}

		else{
			{ // insert in array
				for(int i = 0; i < t ; i++){
				new_ar[i] = ar[i];
			}
			new_ar [n] = key;	

		}
		// to check correct placement 
		// for(int i = 0; i < t; i++){     
		// 		cout<< new_ar[i]<< endl;
		// 	}
			for(int j = 0; j < t ; j++){
			for(int i = j; i < t ; i++){
				if( new_ar[i] > new_ar[i+1]){  
					swap(new_ar[i],new_ar[i+1]);	}
				} 
			}

		for(int j = 0; j < t ; j++){
		  if( new_ar[j] == key)
			cout<<"The position is: " << j+1<< endl;
	      }
		} 
	}
	// to check sorting
			for(int i = 0; i < t; i++){
				cout<< new_ar[i]<< endl;
			}

}