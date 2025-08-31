#include <iostream>
using namespace std;

int main() {
    int matriz[10][10];

    // Lendo os números da matriz
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            cin >> matriz[i][j];
        }
    }

    int maiorElemento;
    int linhaMaiorElemento = 0;
    int colunaMaiorElemento = 0;
    bool primeiroMaior = true;

    // Encontrando o maior elemento
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            if(primeiroMaior || matriz[i][j] > maiorElemento) {
                maiorElemento = matriz[i][j];
                linhaMaiorElemento = i;
                colunaMaiorElemento = j;
                primeiroMaior = false;
            }
        }
    }

    int menorElemento;
    int colunaMenorElemento = 0;
    bool primeiroMenor = true;

    // Encontrando o menor elemento na linha do maior elemento
    for(int j = 0; j < 10; j++) {
        if(primeiroMenor || matriz[linhaMaiorElemento][j] < menorElemento) {
            menorElemento = matriz[linhaMaiorElemento][j];
            colunaMenorElemento = j;
            primeiroMenor = false;
        }
    }

    // Imprimindo os resultados
    cout << menorElemento << endl;
    cout << linhaMaiorElemento << " " << colunaMenorElemento << endl;

    return 0;
}
