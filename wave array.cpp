#include<iostream>
using namespace std;

int main(){ 

    int row = 4;
	int col = 4;

	int ar[row][col] = {
	{1,2,3,4},
	{5,6,7,8},
	{9,10,11,12},
	{13,14,15,16}
	};

	for(int c = 0; c < col ; c++){

	if(c % 2 == 0){
	for (int r = 0; r< row ; r++){
	cout<< ar[r][c] << " ";
	}
}

	else{
	for(int r = row-1 ; r>=0 ; r--){
	cout<< ar[r][c] << " ";
	}
	}
	cout << endl;
	}
}