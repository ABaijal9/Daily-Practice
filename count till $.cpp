#include <iostream>
using namespace std;
 int main(){
 	char ch;
 	int count = 0; 
 	cin >> ch;   //to not count white space
    // ch = cin.get();  // to count white space 

 	while(ch != '$'){
 		count = count + 1;

 		cin >> ch;
 		// ch = cin.get();  // to count white space 
 	}
 	cout<< count<<endl;
 } 