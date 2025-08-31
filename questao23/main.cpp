#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    int n1, n2, n3, n4, n5, n6;

    ifstream entrada ("entrada.txt");

    entrada >> n1 >> n2 >> n3 >> n4 >> n5 >>n6;

    ofstream saida ("saida.txt");

    int M1 =  n1/n2;
    int M2 = n2/n3;
    int M3 = n3/n4;
    int M4 = n4/n5;
    int M5 = n5/n6;

    saida << M1 << M2 << M3 << M4 << M5;

    saida.close ();

    return 0;
}
