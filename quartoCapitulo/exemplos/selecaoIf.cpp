#include <iostream>
using namespace std;

int main(){
    int a = 0;
    int b = 0;

    cout << "Por favor, digite dois inteiros:\n";
    cin >> a >> b;

    if (a < b){
        cout << "max("<<a<<","<<b<<") é " << b << "\n";
    } else {
        cout << "max("<<a<<","<<b<<") é " << a << "\n";
    }

    return 0;
}