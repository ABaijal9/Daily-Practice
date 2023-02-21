print as frequency in the array
#incluce <iostream>
using namespace std;

int main(){
	
	int ar [] = {1,9,9,0,0,0,9,9,8,8,7,7,6,4,3,6,5,1,2};
	int n = sizeof(ar)/sizeof(int);

	int countarr[11] = {0};

	for(int i = 0; i < n; i++){
	    
	    countarr[ar[i]] += 1; 
	}

    int most = INT_MIN;

	for(int j = 0; j < 11 ; j++){

		most = max(most,countarr[j]);

	}

	for(int k = 0 ; k < most; k++){
			cout << k;
		}
}
