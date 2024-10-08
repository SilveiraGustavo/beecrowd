#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int numero_funcionario;
    int numero_horas_trabalhadas;
    double valor_hora_trabalhada;
    double salario_recebido;

    cin >> numero_funcionario >> numero_horas_trabalhadas >> valor_hora_trabalhada;

    salario_recebido = numero_horas_trabalhadas *  valor_hora_trabalhada;
    cout << fixed << setprecision(1);
    cout << "NUMBER = " << numero_funcionario << endl;
    cout << "SALARY = U$ " << salario_recebido << endl;

    return 0;
}
