#include<iostream>
using namespace std;

void readstring(char a[]){

	char ch;
	ch = cin.get();

	int i = 0;
	
	while(ch != '\n'){

		a[i] = ch;
		i++;
		ch = cin.get();
	}
	a[i] = '\0';
}

int main()
{
	char a[100];

	 readstring(a);

	 cout<<a<<endl;

	// int a[] = {3,5,6,7,8,0} ;
	 // int n = sizeof(a)/sizeof(a[0]);
	 // cout << n <<endl;

	 // for(int i = 0 ; i < n ; i++)
	 // 	 cout<<a[i]<<endl;
	 return 0;
}