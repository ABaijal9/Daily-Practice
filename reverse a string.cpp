#include <iostream>
using namespace std;

// int length(char* A){
//    int i = 0;
//    while(A[i] != '\0'){
//       i++;
//    }
//    return i;
// }

void print(char Ar[]){
   int i=0;
   while(Ar[i] != '\0'){
      cout<<Ar[i];
        i++;
   }     
}

char* reverse(char* A, int n){ 

int j = n - 2;
int i = 0;

while(i < j){
   swap(A[i],A[j]);
   i++;
   j--;
}

 return A;
}

int main(){
   int n = 7;
   
   char A[n] = "Ayushi";
   char *ans = reverse(A, n);
   print(ans);
}
