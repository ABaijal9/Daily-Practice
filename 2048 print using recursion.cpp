//2024

#include <iostream>
#include <string>
using namespace std;

string Text[] = {"Zero" , "One" , "Two", "Three" , "Four" , "Five" , " Six" , "Seven" ,"Eight" ,"Nine"}; //Global String Variables for ease in accessibiblity and no scope 

void printintext1(int num){

int no = num%10; 

// BASE CASE
	if( num == 0){
	return;
	}

//RECURSIVE CASE
    cout << Text[no] << " "; //first work done as we want upper layer 1st
    printintext1(num/10); //second func. call as we have to go till base at last then upper
}

void printintext2(int num){

	//BASE CASE
	if(num == 0){
		return;
	}
	//RECURION CASE
	printintext2(num/10); //first func. call as we have to go till base first then upper

	int no = num%10;
	cout << Text[no] << " ";
	
}

int main(){
	
	int num = 2048;
	printintext1(num); // to print 8 -> 4 -> 0 -> 2
	cout << endl;
	printintext2(num); // to print 2 -> 0 -> 4 -> 8

}