#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    int n;

    ifstream entrada ("entrada.txt");
    entrada >> n;

    int cont=1;
    int somatriangular= 0;

    while (cont<=n){
        somatriangular = somatriangular + cont;
        cont++;
    }

    ofstream saida ("saida.txt");
    saida << somatriangular << endl;


    saida.close();

    return 0;
}
