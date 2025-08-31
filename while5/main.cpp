#include <iostream>
#include <fstream>
#include <fstring>

using namespace std;

int main()
{
    int produtos, produzidos, vendidos;
    string nome;

    ifstream entrada ("estoque.txt");

    entrada >> produtos;

    int contador=0;



    while(contador<produtos){
        entrada >> nome >> produzidos >> vendidos;

        cout << nome << " " << produzidos << " " << vendidos << endl;
        contador++;
    }



    return 0;
}
