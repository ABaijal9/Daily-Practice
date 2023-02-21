#include<iostream>
#include <string.h>
using namespace std;

int length(char sen[]){
	int i = 0;

	while(sen[i] != '\0'){
	i++;
	}
	return i;
}

void substring(char* sen, int start, int end){
	
	char sub[end];

	for (int i = 0; i < end; i++)
	 {
	 	sub[i] = sen[start];
	 	start++;
	 } 

	 cout<< sub << endl;

}

int main(){
	
	char sen[] = "HeyMyNameIsAyushi";
	int l = length(sen);

	int start = 0;
	int end = 0;

// WAY 2:
	for(end; end < l ; end++){
		int ch = sen[end];
		if(ch >= 'A' and ch <= 'Z' ){ //check if capital then proceed 
			substring(sen,start,end); //if not then move ahead
			start = end;
			// char sub[] = substring(sen,start,end);
			// cout << sub << endl ;
		}
	}
}

// WAY 1:
	// for(i; i < l ; i++){

	// if(sen[i] >= 'A' and sen[i] <= 'Z' ){
	// cout << endl;  //endl or '\n' as soon as capital letter is there
	// cout << sen[i]; // then print from a new line
	// }
	// else 
	// cout << sen[i]; //if no captial letter then keep printing
	// }