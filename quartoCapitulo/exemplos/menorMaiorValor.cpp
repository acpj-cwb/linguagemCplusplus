#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    cout << "Digite um conjunto de valores inteiros separados por espaço." << endl;
    cout << "Quando acabar, digite Ctrl+D" << endl;

    vector<int> numeros;
    int valores;

    while (cin >> valores){
        numeros.push_back(valores);
    }

    sort(numeros.begin(), numeros.end());

    cout << "O menor número digitado é: " << numeros[0] << endl;

    int tamanho = numeros.size();

    cout << "O maior número digitado é: " << numeros[tamanho-1] << endl;

    return 0;
}