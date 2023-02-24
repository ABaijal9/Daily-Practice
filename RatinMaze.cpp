#include <iostream>
using namespace std;

int sol[50][50] = {0};

bool ratinmaze(char maze[50][50], int r, int c , int i , int j ){
	//base case
cout<< "t" << endl;
	if( i == r-1 and j == c-1 ){  
		sol[i][j]=1;
	// r-1 and c-1 as it is a final destination and when reached then print the solution
    cout << "s" << endl;
	for(int a= 0; a < r; a++){
	    for(int b = 0; b < c; b++){
	        cout << sol[a][b]<< " ";
	    }
	    cout<<endl;
    }
   cout<<endl;
   
		sol[i][j]=0;

		// multiple sol
		return false;
		
	}

	//recursive case

	sol[i][j] = {1};  //make it one to make it a way and go 
	 cout << sol[i][j]<< endl;

	 if(maze[i][j] != 'X' and j <= c-2){
	 	cout << "p" << endl;
	 	bool willgorightornot = ratinmaze(maze , r, c, i, j+1);  //to check if it goes right
	        if(willgorightornot == true){
		        cout << "a" << endl;
	            return true;
	}
	 }

	
     if(maze[i][j] != 'X' and i <= i-2){
     	cout << "a" << endl;
      	bool willgodownornot = ratinmaze(maze , r, c, i+1, j);   //to check if it goes left
	        if(willgodownornot == true){
		       cout << "m" << endl;
	           return true;
	}

      }
	

	sol[i][j] = {0};  //when no way is right then we return so make that bucket 0 again

	return false;   //since not a way 

}

int main(){
	char maze[50][50]={
		"OOOO",
		"OOOX",
		"XOXX",
		"OOOO"

	};
	int r=4,c=4;
	ratinmaze(maze, r, c , 0 ,0 );

	}