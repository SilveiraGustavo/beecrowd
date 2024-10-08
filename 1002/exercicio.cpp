#include <iostream>
#include <iomanip>  // Para usar setprecision
#include <cmath>    // Para usar pow()
using namespace std;

int main(){
    double n = 3.14159;  // Definindo π como constante
    double raio, A;

    // Leitura do valor do raio
    cin >> raio;

    // Cálculo da área da circunferência
    A = n * pow(raio, 2);

    // Impressão do resultado com 4 casas decimais e fim de linha
    cout << fixed << setprecision(4);
    cout << "A=" << A << endl;

    return 0;
}
