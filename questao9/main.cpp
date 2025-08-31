#include <iostream>
#include <cmath>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    float base, altura, X, Y;
    const float k = 18.0;

    cin >> base >> altura >> X >> Y;

    X = base * altura;
    Y = k * X;

    ofstream saida ("potencia.txt");
    saida << fixed << setprecision(1)<< X << "m2" << endl << fixed << setprecision(1) << Y << "W" << endl;

    saida.close();

    return 0;
}
