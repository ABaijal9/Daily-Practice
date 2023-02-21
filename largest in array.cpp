#include <iostream>
using namespace std;

int main()
{
	int ar[] = { 1,2,3,4,5,6,7};
	int n = sizeof(ar)/sizeof(int);

	int r = 0;
	for (int i = 0; i < n ; i++){
	if(ar[i] >  r){
		r = ar[i];
	}
	
}
cout<<r;
return 0;

}