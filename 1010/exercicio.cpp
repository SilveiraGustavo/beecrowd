#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int PECA1,numero1,PECA2,numero2;
    double preco1, preco2;
    double preco_final;

    cin >> PECA1 >> numero1 >> preco1;
    cin >> PECA2 >> numero2 >> preco2;

    preco_final = (preco1 * numero1) + (preco2 * numero2);

    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << preco_final << endl;

    return 0;
}
