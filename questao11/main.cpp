#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    int horas, minutos;
    cin >> horas >> minutos;

    ofstream saida ("saida.txt");

    saida << 60 * horas << endl << (60*horas) + minutos << endl << ((60*horas) + minutos) * 60 << endl;

    saida.close();

    return 0;
}
