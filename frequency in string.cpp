#include <iostream>
using namespace std;

int length(char* A){
   int i = 0;
   while(A[i] != '\0'){
      i++;
   }
   return i;
}

int main(){
	char str[] = "ABCCCCZZZZZZZZZZZZZZzBA";
	int count[26] = {0};

	int n = length(str);

	for(int j = 0 ; j < n ; j++){
	 int i = str[j] - 'A' ;

	 count[i] += 1;

	}

	for(int k = 0; k < 26; k++){
		cout << count[k];
	}
	
}