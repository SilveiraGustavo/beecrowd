#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double A,B,C, media;


    cin >> A >> B >> C;

    media = (A * 2.0 + B * 3.0 + C * 5.0) /10;
    cout << fixed << setprecision(1);
    cout << "MEDIA = " << media << endl;


    return 0;
}
