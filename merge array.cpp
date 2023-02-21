#include <iostream>
using namespace std;

int merge(int a[] , int b[] , int m , int n){

	int i = m, j = n, t = m + n;

	// int a[100] = {1,3,5,6,8,9};
	// int b[] = {2,4,7,10};

	while(t>=0){

		if(a[i]>b[j]){
			a[t] = a[i];
			a-- ;
			t-- ;
		}
		else{
			a[t] = b[j];
			b-- ;
			t-- ;
		}
	} 

}


// void printarr(int a, int t){
// 	for(int i = 0; i < t; i++){
// 		cout<< a[i];
// 	}
// }


int main()
{
	int a[100] = {1,3,5,6,8,9};
	int b[] = {2,4,7,10};
	int m = 6;
	int n = 4;

	merge(a, b , m ,n);
	// int printarr(a, m+n);

	int k = m + n;
	for(int i = 0; i < k; i++){
		cout<< a[i]<<endl;
	}
	
	
	return 0;
}