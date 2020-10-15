#include <iostream>
using namespace std;

int main(){
    string anterior = "";
    string atual;

    while(cin >> atual){
        if (anterior == atual)
            cout << "palavra repetida: " << atual << "\n";

        anterior = atual;
    }

    return 0;
}