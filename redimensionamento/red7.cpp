#include <iostream>
using namespace std;

int main() {
    int tamanho = 10;
    int* A = new int[tamanho];

    // Leitura do vetor
    for (int i = 0; i < tamanho; i++) {
        cin >> A[i];
    }

    int i = 0;
    while (i < tamanho) {
        if (A[i] <= 0) {
            // Vamos criar um novo vetor com tamanho reduzido
            int* novo = new int[tamanho - 1];
            int k = 0;

            // Copiando os elementos, exceto o removido
            for (int j = 0; j < tamanho; j++) {
                if (j != i) {
                    novo[k++] = A[j];
                }
            }

            delete[] A;       // Liberar memória antiga
            A = novo;         // Atualizar ponteiro
            tamanho--;        // Atualizar tamanho

            // NÃO incrementa i, pois o novo elemento na posição i ainda não foi verificado
        } else {
            i++;  // Só avança se não removeu
        }
    }

    // Exibir o vetor resultante
    for (int i = 0; i < tamanho; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    delete[] A;  // Liberar memória ao final

    return 0;
}
