#include <iostream>
#include <fstream>
using namespace std;

struct Pessoa {
    string nome;
    int idade;
};

int contarLinhas(const string& nomeArquivo) {
    ifstream arquivo(nomeArquivo);
    int linhas = 0;
    string nome;
    int idade;

    while (arquivo >> nome >> idade) {
        linhas++;
    }

    arquivo.close();
    return linhas;
}

void insertionSort(Pessoa nomes[], int n) {
    for (int i = 1; i < n; i++) {
        Pessoa chave = nomes[i];
        int j = i - 1;

        while (j >= 0 && nomes[j].idade > chave.idade) {
            nomes[j + 1] = nomes[j];
            j--;
        }

        nomes[j + 1] = chave;
    }
}

int main() {
    string nomeArquivo = "pessoas.txt";
    int quantidade = contarLinhas("pessoas.txt");

    if (quantidade == 0) {
        cout << "Arquivo vazio ou não encontrado." << endl;
        return 1;
    }

    Pessoa* pessoas = new Pessoa[quantidade];

    ifstream arquivo(nomeArquivo);
    if (!arquivo.is_open()) {
        cout << "Erro ao abrir o arquivo." << endl;
        delete[] pessoas;
        return 1;
    }

    // Variável separada para controle do índice de leitura
    int i = 0;
    while (arquivo >> pessoas[i].nome >> pessoas[i].idade) {
        i++;
    }

    arquivo.close();

    insertionSort(pessoas, quantidade);

    cout << "Pessoas ordenadas por idade:\n";
    for (int i = 0; i < quantidade; i++) {
        cout << pessoas[i].nome << " - " << pessoas[i].idade << endl;
    }

    delete[] pessoas;
    return 0;
}
