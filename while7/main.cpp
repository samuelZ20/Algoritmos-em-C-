#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string arquivo;
    int dobro;

    cin >> arquivo; // escrever o nome do arquivo

    ifstream entrada (arquivo); // abrindo o arquivo dobro.txt
    ofstream saida ("dobro.txt");

    int cont=0;
    int anterior=0;
    while(entrada >> cont){
        //numeros >> cont;
        if(anterior!=0){

            if((anterior*2) == cont){
                dobro++;

        }
        }

        anterior = cont;

    }
       saida << dobro;
       saida.close();

    return 0;
}
