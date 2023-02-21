#include <iostream>
using namespce std;


void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
 
        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}

int main(){
	// int n= 6;
	// cin<< n;

	int k = 2;
	// cin<<k;

	int ar[] = {3, 2, 1, 5, 6, 4};
	int n= sizeof(ar)/sizeof(int);

	int max_int = MIN_INT;
	int kth num = 0;


	for (int i = 0; i < n ; i++){
		
		

	}

}