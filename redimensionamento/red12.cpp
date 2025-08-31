#include <iostream>
using namespace std;

int main() {
    int capacidade = 5;
    int* vetor = new int[capacidade];
    int quantidade = 0;
    int realocacoes = 0;
    int numero;

    while (true) {
        cin >> numero;

        if (numero <= 0) break;

        // Verifica se precisa realocar
        if (quantidade == capacidade) {
            int novaCapacidade = capacidade + 5;
            int* novoVetor = new int[novaCapacidade];

            // Copiando os elementos para o novo vetor
            for (int i = 0; i < quantidade; i++) {
                novoVetor[i] = vetor[i];
            }

            delete[] vetor;         // Libera o antigo
            vetor = novoVetor;      // Atualiza ponteiro
            capacidade = novaCapacidade;
            realocacoes++;
        }

        vetor[quantidade] = numero;
        quantidade++;
    }

    // Exibir os números armazenados
    for (int i = 0; i < quantidade; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    // Exibir a capacidade atual
    cout << capacidade << endl;

    // Exibir número de realocações
    cout << realocacoes << endl;

    delete[] vetor;

    return 0;
}
