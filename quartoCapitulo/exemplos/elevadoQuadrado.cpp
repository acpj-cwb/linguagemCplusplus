#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int i = 0;

    while (i < 100){
        cout << i << '\t' << pow(i, 2) << '\n';
        ++i;
    }

    return 0;
}