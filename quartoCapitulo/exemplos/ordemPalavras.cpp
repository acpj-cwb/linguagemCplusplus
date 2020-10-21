#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<string> palavras;
    string temp;

    cout << "Escreva diversas palavras separadas por espaço." << endl;
    cout << "Quando acabar, digite Ctrl+D" << endl;

    while(cin >> temp){
        palavras.push_back(temp);
    }

    cout << "Número de palavras: " << palavras.size() << endl;

    sort(palavras.begin(), palavras.end());

    for (int i=0; i < palavras.size(); ++i){
        if (i == 0 || palavras[i-1] != palavras[i]){
            cout << palavras[i] << endl;
        }
    }

    return 0;
}