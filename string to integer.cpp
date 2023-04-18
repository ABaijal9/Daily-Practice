#include<iostream>
using namespace std;

int stringtoint(char* str, int i){
	//base case
	int n = str[i] - '0';
	if ( i == 0){
		return n;
	}
	//rec case

	int y = stringtoint(str, i-1);	
    return y*10 + n;
}


int main() {
	char str[100];
	cin >> str;
	
	int i = 0;
	while (str[i] != '\0'){
		i++;
	}

    int num = 0;

	cout<< stringtoint(str, i-1);

}