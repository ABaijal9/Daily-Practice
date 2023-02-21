#include <iostream>
using namespace std;

int update(int* x){

	*x = *x + 1;
	cout<< *x <<endl;
	return *x;
} 
//  int reverse(int arr[], int start, int end)
// {
//     while (start < end)
//     {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
//     return 
// }    

int main(){
	
	// int ar[] = {1,2,3,4,5};
	// int n = sizeof(ar)/sizeof(int);

	// int i = 0;  //starting
	// int j = n-1;   //ending

	// cout << reverse(ar , i , j ) << endl;

	// cout << a;



// int reverse(int *a ){
// 	int m = sizeof(a)/sizeof(int);
// 	int j = m-1;
// 	for(int i = 0 ; i <= j ; i++){
// 		swap(a[i],a[j]);
// 		j++;
// 	}
//  	return *a;
// }



int a = 10;
	int* x = &a;
	cout<<*x<< endl;
	
	cout << a << endl;
	update(&a);


}