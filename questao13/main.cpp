#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    int x;
    cin >> x;

    int n100 = x/100;
    int resto = x%100;

    int n50 = resto/50;
    resto = resto%50;

    int n10 = resto/10;

    ofstream saida ("saque.txt");

    saida << n100 << endl << n50 << endl << n10;

    saida.close();


    return 0;
}
