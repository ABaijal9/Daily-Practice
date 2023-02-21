#include<iostream>
using namespace std;

void readastring(int a[]){

	int ch;
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
	int ar[100];

	 readstring(a);

	 cout<<a<<endl;

}