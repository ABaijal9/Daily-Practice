// COUNT SORT
#include<iostream>
using namespace std;

int main(){
	
	
	int ar [] = {1,9,9,0,0,0,9,9,8,8,7,7,6,4,3,6,5,1,2};
	int n = sizeof(ar)/sizeof(int);  

	int countarr[11] = {0};  //crete am array with all elements as 0

	for(int i = 0; i < 18 ; i++){  //count frequency 
	    
	    countarr[ar[i]] += 1;  //adding 1 each time number repeats
	}


	for(int j = 0; j < 11 ; j++){  // pirnt that no. till the no. of frequency

		int num = countarr[j];

		for(int k = 0 ; k < num; k++){
			cout << j;
		}

	}
}