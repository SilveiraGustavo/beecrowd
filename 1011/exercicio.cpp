#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    int raio;
    double pi = 3.14159;
    double volume;

    cin >> raio;
    volume = (4.0 / 3) * pi * pow(raio,3);
    cout << fixed << setprecision(3);
    cout << "VOLUME = " << volume << endl;
    return 0;
}
