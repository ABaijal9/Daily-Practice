#include <iostream>
using namespace std;

int main()
{

		int ar[] = {5,5,5,3,3,3,4};
	int n = sizeof(ar)/sizeof(int);

	int count[20];         //creating new array to store unique nums
	count[0] = ar[0];
	int cnt = 0;


	     for(int i= 1; i < n ; i++){           //loop to check all postions OF the OLD array

		// for( j = 0 ;  ; j++ ){

		int j = 0;

		while(count[]){                     //loop to check IN a NEW array

			if(count[j] == ar[i])              // if present then increase count in the particular bucket
		      count[j] = count[j] + 1;
		    
	      	else{
	      		count[j+1] = ar[i];            //if not then create new bucket

	      		j++;
		}
		}

		int m = sizeof(count)/sizeof(int);

		for( int k = 0 ; k < m ; k++ ){            // loop to divide all bickets

			if((count[k] % 3 != 0)){                // non divided by 3 is qunique num
				cout<< count[k];
			}
			
		}
		
		

	return 0;
} 