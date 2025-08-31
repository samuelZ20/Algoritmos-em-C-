#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    float salario, valor1, valor2;

    ifstream entrada ("entrada.txt");

    entrada >> salario >> valor1 >> valor2;

    cout << salario - (0.0038*valor1 + 0.0038*valor2 + valor1 + valor2);

    return 0;
}



