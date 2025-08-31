#include <iostream>
#include <fstream>

using namespace std;

struct Fase {
    int numero;
    string nome;
};

// Insertion sort decrescente
void insertionSortD(Fase vet[], int tamanho) {
    for(int i = 1; i < tamanho; i++) {
        Fase chave = vet[i];
        int j = i - 1;

        while(j >= 0 && vet[j].numero < chave.numero) {
            vet[j + 1] = vet[j];
            j--;
        }

        vet[j + 1] = chave;
    }
}

// Insertion sort crescente
void insertionSortC(Fase vet[], int inicio, int fim) {
    for(int i = inicio + 1; i < fim; i++) {
        Fase chave = vet[i];
        int j = i - 1;

        while(j >= inicio && vet[j].numero > chave.numero) {  // Corrigido: j >= inicio
            vet[j + 1] = vet[j];
            j--;
        }
        vet[j + 1] = chave;
    }
}

int main() {
    ifstream arquivo("fases.txt");

    if(!arquivo.is_open()) {
        cout << "ERRO AO ABRIR ARQUIVO" << endl;
        return 1;
    }

    Fase fases[100];
    int quantidade = 0;

    // Ler o arquivo
    while(arquivo >> fases[quantidade].numero >> fases[quantidade].nome) {
        quantidade++;
    }

    arquivo.close();

    int k;
    cin >> k;

    // Ordenar as K primeiras em ordem decrescente
    if(k > 0) {
        insertionSortD(fases, k);
    }

    // Ordenar o restante em ordem crescente
    if(k < quantidade) {
        insertionSortC(fases, k, quantidade);  // Corrigido: fases em vez de fases
    }

    // Imprimir resultado
    for(int i = 0; i < quantidade; i++) {
        cout << fases[i].nome << endl;
    }

    return 0;
}