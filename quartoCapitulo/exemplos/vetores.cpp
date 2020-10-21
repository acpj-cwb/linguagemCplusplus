#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<double> temps;
    double temp;

    cout << "Insira algumas temperaturas: " << endl;

    while (cin >>temp)
    {
        temps.push_back(temp);
    }
    
    double soma = 0;

    for (int i=0; i<temps.size(); ++i){
        soma+=temps[i];
    }

    cout << "Media das temperaturas: " << soma/temps.size() << endl;
    sort(temps.begin(), temps.end());
    cout << "Temperatura mediana: " << temps[temps.size()/2] << endl;

    return 0;
}