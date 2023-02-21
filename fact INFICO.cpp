#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    int num;
    cin >> num;

    int a;
    cin >> a;

    int fact = a;

    for( int t = 1; t < n ; t++){
        int b;
        cin >> b ;
        fact = fact * b;
    }

    if( fact == num){
        cout<< "YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }s
}
