#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{

    ifstream entrada ("senha.txt");
    int N;
    entrada >> N;

    ofstream saida ("saida.txt");
    int n=0;
    int mersenne;

    while (n<=N) {
        if (n>0) saida << " ";
        saida << mersenne;

        n++;
        mersenne = pow(2,n) - 1;
    }

    return 0;
}
