#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int area; // area em m2 a ser pintada
    double valor; // valor do galao de tinta

    ifstream entrada ("entrada.txt");
    entrada >> area >> valor;

    ofstream saida ("saida.txt");

    int quantidade = ceil(area/54);

    double pago = quantidade * valor;

    saida << quantidade << endl << fixed << setprecision(2) << pago;

    saida.close();

    return 0;

}

