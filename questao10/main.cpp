#include <iostream>
#include <cmath>
#include <fstream>


using namespace std;

int main()
{
    float alturadegrau, alturadesejada;
    int necessario;

    ifstream entrada ("entrada.txt");
    entrada >> alturadegrau >> alturadesejada;

    necessario = ceil((100 * alturadesejada) / alturadegrau);

    ofstream saida ("degraus.txt");
    saida << necessario;

    return 0;

}
