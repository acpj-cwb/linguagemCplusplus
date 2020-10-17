#include <iostream>
using namespace std;

int main(){
    int num_de_palavras = 0;
    string anterior = " ";
    string atual;
    cout << "Crtl+D para sair" << std::endl;

    while(cin >> atual){
        ++num_de_palavras;

        if(anterior == atual){
            cout << "palavra número " << num_de_palavras
                << " repetida: " << atual << "\n";
        }

        anterior = atual;
    }

    return 0;
}