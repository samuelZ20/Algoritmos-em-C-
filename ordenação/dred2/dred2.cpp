#include <iostream>
using namespace std;

void imprimirVetor(int vet[], int n){
    for(int i=0; i<n; i++){
        cout << vet[i] << " ";
    }
    cout << endl;
}

// Função que faz insertion sort decrescente até a posição k (inclusive)
void insertionSortDecrescenteParcial(int vet[], int n) {
    for (int i = 1; i <= n; i++) {
        int chave = vet[i];
        int j = i - 1;

        // Move os menores valores para a direita
        while (j >= 0 && vet[j] < chave) {
            vet[j + 1] = vet[j];
            j--;
        }
        vet[j + 1] = chave;
         imprimirVetor(vet, n);
    }
}

int main() {

    int n;
    cin >> n;

    int vet[n];
    for(int i=0; i<n; i++){
        cin >> vet[i];
    }

    insertionSortDecrescenteParcial(vet,n);

    return 0;
}
