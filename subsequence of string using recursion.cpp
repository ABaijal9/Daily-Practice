#include<iostream>
using namespace std;

void subsequenceofstring(char* input, char* output, int i , int j){
	  //base case
	  if(input[i] == '\0'){
	  output[j] = '\0';
	  cout << output << endl;
	  return;
	  }

	  //recursion case
	  //1. without considering ith
	  subsequenceofstring(input, output, i+1 , j);


	  //2. with considering ith
	  output[j] = input[i];
	  subsequenceofstring(input, output, i+1 , j+1);

	  return;
}

int main(){

	char input[] = "abc";
	char output[100];


	subsequenceofstring(input, output, 0 , 0);

}
