#include <iostream>
#include <fstream>


using namespace std;

 int main() {

    int num1, num2;

    ifstream entrada("entrada.txt");
    entrada >> num1 >> num2;

    int menor, segundoMenor, maior, segundoMaior;

    // Inicializa corretamente
    if (num1 < num2) {
        menor = num1;
        segundoMenor = num2;
        maior = num2;
        segundoMaior = num1;
    } else {
        menor = num2;
        segundoMenor = num1;
        maior = num1;
        segundoMaior = num2;
    }

    int num;
    while (entrada >> num) {
        // Atualiza menores
        if (num < menor) {
            segundoMenor = menor;
            menor = num;
        } else if (num < segundoMenor) {
            segundoMenor = num;
        }


        // Atualiza maiores
        if (num > maior) {
            segundoMaior = maior;
            maior = num;
        } else if (num > segundoMaior) {
            segundoMaior = num;
        }
    }

    cout << menor << endl;
    cout << segundoMenor << endl;
    cout << maior << endl;
    cout << segundoMaior << endl;

    return 0;
}


