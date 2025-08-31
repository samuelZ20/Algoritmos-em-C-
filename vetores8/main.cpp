#include <iostream>
using namespace std;

int main() {
    string clientes[10];
    int refeicoes[10];

    // Lendo os nomes dos 10 clientes
    for (int i = 0; i < 10; i++) {
        cin >> clientes[i];
    }

    // Lendo a quantidade de refeições de cada cliente
    for (int i = 0; i < 10; i++) {
        cin >> refeicoes[i];
    }

    // Calculando e mostrando as refeições pagas
    for (int i = 0; i < 10; i++) {
        int gratis = refeicoes[i] / 10; // A cada 10 refeições, 1 é grátis
        int pagas = (refeicoes[i]*10+10)/11;
        cout << clientes[i] << " " << pagas << endl;
    }

    return 0;
}
