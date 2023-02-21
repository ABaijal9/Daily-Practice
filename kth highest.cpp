#include <iostream>
using namespace std;

void sort(int ar[] , int n , int k)
{
	// for ( int i = 0; i < n ; i++ ) {    // loop check
    // 	cout << ar[i] << " ";
    // }
    // cout<< endl;

	for (int i = 0; i < n - 1; i++){             // bubble sort       
        for (int j = 0; j < n - i - 1; j++){
            if (ar[j] > ar[j + 1])
                swap(ar[j], ar[j + 1]);
        }
    }

    // for ( int i = 0; i < n ; i++ ) {        // loop check after operation
    // 	cout << ar[i] << " ";
    // }

    cout << endl << ar[n - k];
}


int main() //find kth largest of an array 
{
	int n;
	cin >> n ;

	int k;
	cin >> k ;

	int ar[n];
	for(int i = 0 ; i < n ; i++){
		cin >> ar[i];
	}

	sort (ar , n , k);

	return 0;
}