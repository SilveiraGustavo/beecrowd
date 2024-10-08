#include <iostream>
#include <iomanip> // Para manipular a precisão da saída
using namespace std;

int main() {
    double A, B, media;

    // Leitura dos valores de ponto flutuante
    cin >> A >> B;

    // Cálculo da média ponderada
    media = (A * 3.5 + B * 7.5) / 11.0;

    // Configuração da saída com 5 dígitos após o ponto decimal
    cout << fixed << setprecision(5);

    // Impressão do resultado conforme o formato especificado
    cout << "MEDIA = " << media << endl;

    return 0;
}
