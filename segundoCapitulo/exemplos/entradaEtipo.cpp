//lê nome e idade
#include <iostream>
using namespace std;

int main(){
    cout << "Por favor, informe seu primeiro nome e sua idade: \n";
    string primeiro_nome;
    int16_t idade;
    cin >> primeiro_nome;
    cin >> idade;
    cout << "Oi, " << primeiro_nome << " (idade " << idade << "). \n";

    return 0;
}