#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n
;
    int t;

    while(n % 10 != 0) {
        t = n % 10;
        n = n / 10;
        cout << t;
    }
    
}