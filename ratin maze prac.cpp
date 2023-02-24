#include<iostream>
using namespace std;

int sol[50][50] = {0};

bool ratinmaze(char maze[50][50], int r, int c, int i, int j){
   
    //base case

    if(i == r-1 and j == c-1){
        sol[i][j] = 1; 

        for(int a = 0; a<r; a++){
            for(int b = 0; b < c ; b++){
                cout << sol[a][b] << " ";
            }
            cout<< endl;
        }
        cout<< endl;

     //for single answer 
       return true;  

     // //for multiple answer --> keep on getting false and it will 
     //    sol[i][j]=0;
     //    return false;
    }

    //recursion case	

    sol[i][j] = 1;

    if(maze[i][j] != 'X' && j < c-1){ 
        
    	 bool goright = ratinmaze(maze, r, c , i,j+1);
                if(goright == true){
                    
            return true;
        }
    }

    if(maze[i][j] != 'X' && i < r-1){
       
    	bool godown = ratinmaze(maze, r, c , i+1 ,j) ;
                if(godown == true){
                   
            return true;
        }          
    } 

    // return true;

    sol[i][j] = 0;
    return false;

}

int main(){

    int r ,c;
    cin >> r >> c;


	char maze[50][50];


        for(int a = 0; a<r; a++){
            for(int b = 0; b < c ; b++){
                cin >> maze[a][b];;
            }
        }

	ratinmaze(maze, r, c , 0 ,0);

}