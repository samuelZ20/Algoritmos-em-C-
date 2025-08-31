#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()

{
    float profundidade, altura, largura, densidade;

    ifstream entrada ("entrada.txt");

    entrada >> profundidade >> altura >> largura >> densidade;

    cout << profundidade * altura * largura * densidade;

    return 0;
}
