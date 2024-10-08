#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    string nome_vendedor;
    double salario_fixo;
    double total_de_vendas_mes;
    double valor_recebido;

    cin >> nome_vendedor >> salario_fixo >> total_de_vendas_mes;
    valor_recebido = (total_de_vendas_mes * 0.15) + salario_fixo;
    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << valor_recebido << endl;

    return 0;
}
