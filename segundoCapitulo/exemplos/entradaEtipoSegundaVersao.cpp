#include <iostream>
using namespace std;

int main(){
    cout << "Por favor, informe o seu primeiro nome e sua idade\n";

    string primeiro_nome = "???";

    int16_t idade = 5555;

    cin >> primeiro_nome >> idade;

    cout << "Oi, " << primeiro_nome << " (idade " << idade << ")\n";

    return 0;
}