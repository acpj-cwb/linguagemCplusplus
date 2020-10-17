#include <iostream>
using namespace std;

int main(){
    const double cm_por_pol = 2.54;
    double comprimento=1;
    char unidade = 'a';

    cout << "Por favor, informe o comprimento seguido pela unidade (c oi p): \n";

    cin >> comprimento >> unidade;

    switch (unidade)
    {
    case 'p':
        cout << comprimento << "pol == " << cm_por_pol*comprimento << "cm\n";
        break;
    
    case 'c':
        cout << comprimento << "cm ==" << comprimento/cm_por_pol << "pol\n";
        break;
    
    default:
        cout << "Desculpe, não reconheço a unidade indicada por " << unidade << "\n";
        break;
    }

    return 0;
}