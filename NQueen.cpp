#include<iostream>
using namespace std;

bool Placesafeornot(int board[][10], int row, int col, int n){
// cout << " 4  ";
  int x = row;
  int y = col;  //to use it for corrct postion later
  //check horizontal and vertical
  for( int k = 0; k < n;  k++){
     if(board[row][k] || board[k][col]){
     	// cout << " 5  ";
        return false;
     } 
  }

   while(row >= 0 && col < n){ //diagonal check bottom left to top right
     if(board[row][col]){
     	// cout << " 6  ";
     	return false;
     }    
      row--; col++; 
  }

  row = x; 
  col = y;  //to reallocate the right position
   while(row >= 0 && col >= 0){ //diagonal check bottom right to top left
     if(board[row][col]){
   //  	cout << " 7  ";
     	return false;
     }
    row--; col--; 
  }
//  cout << " 8  ";
  return true;
} 

bool NQueen(int board[][10], int i, int n){
	//base case
//	cout << " 1  ";

	if(i == n){        //when board reaches and completes whole board (n-1) and get out to n ...
//	cout<<"9 "; 
	for(int i = 0 ; i< n; i++){
	    for(int j = 0; j < n; j++){
	        cout << board[i][j] << " ";
	    }
	    cout<<endl;
	}
	     cout<<endl;
	}

	//recursive case
	for(int j = 0 ; j < n ; j ++){ //to check for all blocks of i from 0 tp N-1
//		cout << " 2  ";
		if(Placesafeornot(board, i, j, n) == true){ //i,j sqaure of Queen is safe or not
		board[i][j] = 1;    //mistake: Placesafeornot(board, i, j, n) is right not Placesafeornot(board, i, 0, n)
		//  thats why we have applied loop

//		cout << " 3  ";

	   bool smallboardrightornot = NQueen(board,i+1,n);
	   if(smallboardrightornot == true){
	   return true;
	   }

	   board[i][j] = 0;   //backtracking 
	}

	}
	
	return false;
}

int main(){

	int board[10][10] = {0};
	int n;
	cin >> n;

	NQueen(board,0,n);
}