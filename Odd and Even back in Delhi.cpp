//Odd and Even back in Delhi


#include<iostream>
using namespace std;

void checkoddeven(int num){

int evensum = 0 , oddsum = 0;


while(num != 0){

	int n = num % 10;   // get digit
    num /= 10;          //update num

    if(n%2 == 0){      //check even
    evensum = evensum + n;   //add even digits
    }

    else{             //check odd
    oddsum = oddsum + n;    //add odd digits
    }

}

if(evensum % 4 == 0 or oddsum % 3 == 0){
	cout << "yes" << endl;
}
else {
	cout << "no" << endl;
	}
	
}

int main(){

int n ;
cin >> n;

for (int i = 1 ; i <= n ; i++){

    int num;
    cin >> num;

	checkoddeven(num);
}

}