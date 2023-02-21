#include <bits/stdc++.h>
using namespace std;

int main()
{
	int ar[] = {7,1,5,3,6,4};
	int n = sizeof(ar)/ sizeof(int);

	int  min = INT_MAX;
	// int max1 = INT_MIN;
	int profit = 0;

	//find min stock

	for (int i = 0; i < n ; i++){
		if( ar[i] < min){
			min = ar[i];
		}

		else{
			profit = max( profit , (ar[i] - min));
		}
		
	}
	cout<< profit;
	}
