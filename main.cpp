#include <iostream>
#include <math.h>

using std::cout; using std::cin; using std::endl;

int main(){
    double i, j;
    while(cin >> i){
        cin >> j;
        i = 1/i;
        cout << pow(j,i) << '\n';
    }
    return 0;
}

