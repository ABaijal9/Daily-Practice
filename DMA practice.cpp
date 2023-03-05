//#DMA practice
#include<iostream>
using namespace std;

int* createarray(int n){ac
	int *a = new int [100];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
    return a;
}


int main(){

	//primitive data type --> DMA
    int* aptr = new int;
    *aptr = 50;
    cout << *aptr <<endl;

    //1D Arrays
    int r = 10;
    // int *xptr = new int[100];
    int *xptr = createarray(r);

   for(int i = 0; i < r; i++){
       cout << *(xptr+i) << " ";
     }
       cout <<endl;

    // delete aptr;
    // cout << *aptr <<endl;
    // aptr = NULL;
    // cout << aptr <<endl;

    // delete []xptr;
    // xptr = NULL;
    // cout << xptr;

    


    // int ar[100];
    // int *arptr = new int[100];
    // for(int i = 0; i < n; i++)
    // {
    // 	cin >> *(arptr+i);
    // }

    // for(int i = 0; i < n; i++)
    // {
    // 	cout<< *(arptr+i);
    // }
}
