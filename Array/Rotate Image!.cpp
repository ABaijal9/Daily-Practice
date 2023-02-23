#include<iostream>
using namespace std;

int main(){
	
	int n;
	cin >> n;

	// int i = j = l = k = n;

	// cout<< i << " " << j << " " << l << " " << j << endl;

	int ar[n][n];
	    for(int row = 0 ; row < n ; row++){
	        for(int col = 0 ; col < n ; col++){
	            cin >> ar[row][col];
	        }
	    }


	int br[n][n]; // new array
	
	int i = 0; 

	    for(int l = 0 ; l < n ; l++){ // br[k][l] & ar[i][j];
	        
	        int j = 0;

	        for(int k = n-1 ; k >= 0; k--){  
	            
	            br[k][l] = ar[i][j];  
	            j++;
	        }
	        i++;
	    }

	    for(int row = 0 ; row < n ; row++){
	        for(int col = 0 ; col < n ; col++){
	            cout << br[row][col] << " ";
	        }
	        cout << endl;
	    }



}