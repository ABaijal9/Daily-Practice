#include <iostream>
using namespace std;

int length(char Ar[]){

	int i = 0;
	while(Ar[i] != '\0'){
		i++;
	}

	//  //3
	// int lenght = 0;

	return i; 
}
void print(char Ar[]){
	int i=0;
	while(Ar[i] != '\0'){
		cout<<Ar[i];
        i++;
	}    	
}
int main(){
    int N = 4;
    char A[100] ="Ayushi";
    char* ans;

        for( int i = 0 ; i < N; i++){   //loop1
	        cout<< "oo" << endl;
            char B[100];
            cin >> B;
                if ( length(A) < length(B)){
                    int lengthA = length(A);
                    int lengthB = length(B);
                    int i=0;
                    while(lengthB>0){
                     A[i] = B[i];
                     i++;
                     lengthB--;
                    } 
                    A[i] = '\0';
                }
        }
        print(A);
}
