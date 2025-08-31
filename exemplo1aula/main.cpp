#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream arqEntrada ("entrada.txt");
    ofstream arqSaida ("saida.txt");

    int contador = 0; // conta a informacao dentro do arquivo
    string dado;

  //se existir, faça tal coisa

    if (arqEntrada){
        while (arqEntrada >> dado){
            arqSaida << dado << endl;
            contador++;
            }
    }else {
        cout << "arquivo nao existe" << endl;
}
   arqEntrada.close();
   arqSaida.close();

    return 0;
}
