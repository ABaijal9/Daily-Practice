#include<iostream>
#include <bits/stdc++.h>
using namespace std;


bool positionsafeornot(int board[][9], int i, int j, int n, int num){

//check vertically
for(int t = 0 ; t< n; t++){
    if(board[i][t] == num){
        cout << " 3 ";
       return false;
    }
}

//check horizonatally &

for(int t = 0 ; t< n; t++){
    if(board[t][j] == num){
        cout << " 4 ";
       return false;
    }
}

//check for its squares
int no = sqrt(n);

int si = (i/no)*no;  //formula for  small sqare initiating positon block 
int sj = (j/no)*no;

for(int k = si ; k < si+no; k++){
        for(int l = sj ; l < sj+no; l++){
            if(board[k][l] == num){
                cout << " 5 ";
            return false;
            }
    }
}
return true;
}

bool sudokusolver(int board[][9], int i ,int j, int n){
	//base case
    if(i == n){  //if all rows are done then print sudoku as our work is done
       for(int r = 0 ; r < n; r++){
        for(int c = 0 ; c < n; c++){
            // cout << " 10 ";
         cout << board[r][c] << " ";
    }
      cout << endl;
    }
    cout << " 11 ";
    return true;
}
	//recursive case

    if(j == n){
        cout << " 8 ";
        return sudokusolver(board, i+1,j,n);  //slide to next row when column is completed
    }

    if(board[i][j] == '\0'){
        cout << " 9 ";
        return sudokusolver(board, i,j+1,n); //shift to next element when already position is solved
    }

    for(int num = 1 ; num <= n ; num++){   //for each number
        cout << " 1 ";

        if(positionsafeornot(board, i, j, n, num) == true){  //check if position is safe or not if safe them...
           board[i][j] == num;

           cout << " 2 ";

           bool chotapartisrightornot = sudokusolver(board, i , j+1, n);  //check for smaller issue

           if(chotapartisrightornot = true){
            cout << " 6 ";
              return true;
           }

           board[i][j] == 0; //backtracking if position is not right
        }
    }
    return false;
}

int main(){

int n; 
cin >> n;
int ar[n][9];
for(int i = 0 ; i < n; i++){
        for(int j = 0 ; j < 9; j++){
        cin >> ar[i][j];
    }
}

sudokusolver(ar, 0, 0, n);
	
}


// 9

// 5 3 0 0 7 0 0 0 0 
// 6 0 0 1 9 5 0 0 0 
// 0 9 8 0 0 0 0 6 0 
// 8 0 0 0 6 0 0 0 3 
// 4 0 0 8 0 3 0 0 1 
// 7 0 0 0 2 0 0 0 6 
// 0 6 0 0 0 0 2 8 0 
// 0 0 0 4 1 9 0 0 5 
// 0 0 0 0 8 0 0 7 9 