#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    ifstream entrada ("ingresso.txt");


    int valorIng, dia;
    char categoria;
    float valorFinal; // valor com desconto ou nao
    float total=0; // é uma variavel que ACUMULA


    entrada >> valorIng;

    while(entrada>> dia >> categoria){

        valorFinal = valorIng; // o valor começa sendo o valor do ingresso

        if (dia>=6 and dia<=13){
        if(categoria=='A'){
            valorFinal *= 0.9; // caso tenha essa condição o valor passa a ser com desconto
            }
        else if (categoria == 'E'){
            valorFinal *= 0.85; // caso tenha essa condição o valor passa a ter esse desconto
        }

        }

        else if (dia>=14 and dia<=24){
            if(categoria=='A'){
                valorFinal *= 0.95;
            }
            else if (categoria=='E') {
                valorFinal *= 0.9;
            }
        }

    total = total + valorFinal;
    }

    cout << total << endl;


    return 0;
}
