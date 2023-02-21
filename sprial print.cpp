#include <iostream>
using namespace std;

// void sprialprint(int* ar,int row,int col){

int main(){

	int row = 4;
	int col = 4;
	// cin << row << col;
	// cin.ignore();

	int ar[row][col] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}};

	int sr = 0 ;
   int sc = 0 ;
   int er = row - 1;
   int ec = col - 1;

   while( sr <=  er && sc <= ec){  //giant loop

       for(int col = sc; col <= ec; col++){ //loop 1 : right to left
	 	cout << ar[sr][col];
	 }
	 sr++;
	 cout << endl;

	 for(int row = sr ; row <= er; row++){ //loop 2 : top to bottom
	 	cout << ar[row][ec];
	 }
	 ec--;
	 cout << endl;

	 for(int col = ec ; col >= sc; col--){ //loop 3 : left to right
	 	cout << ar[er][col];
	 }
	 er--;
	 cout << endl;

	 for(int row = er; row >= sr; row--){ //loop 4 : bottom to top
	 	cout << ar[row][sc];
	 }
	 sc++;
	 cout << endl;
	 
   }

}

    // for (int r = 0; r< row ; r++){
	// 	for(int c = 0; c < col ; c++){
	 //         cin<< ar[r][c] << " ";
	 //     }
	 // }
	
	// for (int r = 0; r< row ; r++){
	// 	for(int c = 0; c < col ; c++){
	//          cout<< ar[r][c] << " ";
	//      }
	//  }

	// sprialprint(ar, row, col);
