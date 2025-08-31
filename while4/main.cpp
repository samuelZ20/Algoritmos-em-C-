#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int qntalunos;
    string nome;
    float nota1, nota2;

    ifstream entrada ("entrada.txt");
    ofstream saida ("saida.txt");

    entrada >> qntalunos;

    int contador = 0;

    while (contador < qntalunos) {
        entrada >> nome >> nota1 >> nota2;

        float media = (nota1+nota2)/2;

        if (media <7){
            saida << nome << endl;
        }

        contador++;
    }
    return 0;
}
