//ler e escrever um prenome
#include <iostream>
using namespace std;

int main(){
    cout << "Por favor, informe seu primeiro nome (seguido de 'Enter'):\n";
    
    string primeiro_nome;

    cin >> primeiro_nome;

    cout << "Oi, " << primeiro_nome << "!\n" << std::endl;
}