#include <iostream>
using namespace std;

int main(){
	
	// int n;
	// cin >> n;
	int ar[] = {1,2,3,4,6};
	int n = sizeof(ar) / sizeof(int);

	// for(int i = 0; i < n; i++){
	//    cin >> ar[i];	
	// }
	
	// for(int i = 0; i < n; i++){
	//    cout << ar[i];	
	// }

	int key = 4;
	// cin >> key;
	int find;

	for(int i = 0; i < n; i++){

		//cout << "nice" ; 

	   if(ar[i] == key){
	   	cout << "present";
	   }

	   else{

	   	int t[n+1];


	   for(int i = 0; i<=n ; i++){
	   	t[i] = ar[i];
	   }

	    int k, l;
          for (k = 0; k < n - 1; k++)
 
        // Last i elements are already in place
          for (l = 0; l < n - l - 1; j++)
            if (t[l] > t[l + 1])
                swap(&t[l], &t[l + 1]);
}

	   }
	}

}