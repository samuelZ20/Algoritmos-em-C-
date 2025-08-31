#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    double custoespetaculo, precoconvite;
    int numeroconvites;

    ifstream entrada ("teatro.txt");
    entrada >> custoespetaculo >> precoconvite;

    numeroconvites = ceil(custoespetaculo / precoconvite);

    cout << numeroconvites << endl;

    ofstream saida ("convite.txt");
    saida << numeroconvites;

    saida.close();

    return 0;
}
