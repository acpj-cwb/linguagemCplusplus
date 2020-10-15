#include <iostream>
using namespace std;

int main(){
    string anterior = "";
    string atual;
    cout << "Crtl+D para sair" << std::endl;

    while(cin >> atual){
        if (anterior == atual)
            cout << "palavra repetida: " << atual;

        anterior = atual;
    }

    return 0;
}