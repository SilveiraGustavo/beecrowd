#include <iostream>
#include <iomanip> // Para controlar a precis�o
#include <cmath>   // Para usar fun��es matem�ticas

using namespace std;

int main() {
    double A, B, C;

    // Entrada dos valores
    cin >> A >> B >> C;

    // Definindo o valor de Pi
    const double PI = 3.14159;

    // C�lculos
    double areaTriangulo = (A * C) / 2.0;
    double areaCirculo = PI * pow(C, 2);
    double areaTrapezio = ((A + B) * C) / 2.0;
    double areaQuadrado = pow(B, 2);
    double areaRetangulo = A * B;

    // Sa�da com 3 casas decimais
    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << areaTriangulo << endl;
    cout << "CIRCULO: " << areaCirculo << endl;
    cout << "TRAPEZIO: " << areaTrapezio << endl;
    cout << "QUADRADO: " << areaQuadrado << endl;
    cout << "RETANGULO: " << areaRetangulo << endl;

    return 0;
}

