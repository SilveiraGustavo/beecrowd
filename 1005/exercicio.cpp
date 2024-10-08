#include <iostream>
#include <iomanip> // Para manipular a precis�o da sa�da
using namespace std;

int main() {
    double A, B, media;

    // Leitura dos valores de ponto flutuante
    cin >> A >> B;

    // C�lculo da m�dia ponderada
    media = (A * 3.5 + B * 7.5) / 11.0;

    // Configura��o da sa�da com 5 d�gitos ap�s o ponto decimal
    cout << fixed << setprecision(5);

    // Impress�o do resultado conforme o formato especificado
    cout << "MEDIA = " << media << endl;

    return 0;
}
