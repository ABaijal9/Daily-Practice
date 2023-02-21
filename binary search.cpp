#include <iostream>
using namespace std;

void binary_search(int ar[], int n, int key){

	int s = 0; 
	int e = n - 1;

	for(int i = 0; i < n; i++);

		int m = (s + e)/2;

	if (m == key)
	{
		cout<<"mil gai at "<<m;
		}

	else if ( m < key ){
		s = m+1;
	}

	else {
		e = m - 1;
	}
}



int main()
{
	int ar[] = {1,2,4,5,6,7,8,9};
	int n = sizeof(ar) / sizeof (int);

	int key;
	cin>>key;

	binary_search(ar,n, key);

	
	return 0;
}