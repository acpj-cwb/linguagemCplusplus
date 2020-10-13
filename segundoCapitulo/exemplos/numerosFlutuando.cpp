#include <iostream>
#include <math.h>
using namespace std;

int main(){
    cout << "Por favor, informe um valor em ponto flutuante: ";
    double n;
    cin >> n;
    cout << "n == " << n
         << "\nn+1 == " << n+1
         << "\ntriplo de n == " << 3*n
         << "\ndobro de n == " << n+n
         << "\nn ao quadrado == " << n*n
         << "\nmetade de n == " << n/2
         << "\nraiz quadrada de n == " << sqrt(n)
         << endl;

    return 0;
}   