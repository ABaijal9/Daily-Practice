#include<iostream>
#include <string.h>

using namespace std;
 //easy problem similar to subsequence

string key[10] = {"", "", "ABC", "DEF", "GHI","JKL","MNO","PQRS","TUV", "wXYZ"};
             //{0 , 1,    2,     3,     4,    5 ,    6,     7,    8,     9}

void PhoneKeypad(char* num, int i, char* print, int j){   //i--> index for number & j--> index for print 
//base case 
if(num[i] == '\0'){
    print[j] == ' ';
    cout<<print << endl;

    // when you want to find any particular string

        // if(strcmp(print, "MOM") ==0){
        //     cout << "yes present: " << print;
        // }
        return;
}

//rec case
int index = num[i] - '0';                   //to convert char to int
    for(int k = 0; key[index][k] != '\0' ; k++ ){    //for whole index of key to print
    print[j] = key[index][k];
    PhoneKeypad(num, i + 1, print, j+1); // smaller problem already solved (assume and solve) [i+1 --> next element]
    }
 }

int main(){

char num[100]; //input given
cin >> num;

char print[100];  //output 
PhoneKeypad(num, 0 , print, 0);

}
