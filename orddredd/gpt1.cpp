#include <iostream>
#include <fstream>

using namespace std;

int contarLinhas(const string& nomeArquivo){
    ifstream arquivo (nomeArquivo);
    string linha;
    int cont=0;
    while(getline(arquivo,linha)){
        cont++;
    }
    arquivo.close();
    return cont;
}

void lerArquivo (const string& nomeArquivo, int numeros[], string nomes[], int tamanho ){
    ifstream arquivo (nomeArquivo);
    for(int i=0; i<tamanho; i++){
        arquivo >> numeros[i] >> nomes[i];
    }
    arquivo.close();
}

void insertionSortD(int numeros[], string nomes[], int K){
    for(int i=1; i<K; i++){
        int chaveNum = numeros[i];
        string chaveNome = nomes[i];
        int j=i-1;

        while(j>=0 and numeros[j]<chaveNum){
            numeros[j+1] = numeros[j];
            nomes[j+1] = nomes[j];
            j--;
        }

        numeros[j+1] = chaveNum;
        nomes[j+1] = chaveNome;
    }
}

void insertionSortC(int numeros[], string nomes[], int inicio, int tamanho){
    for(int i=inicio+1; i<tamanho; i++){
        int chaveNum= numeros[i];
        string chaveNome = nomes[i];
        int j= i-1;

        while(j>=inicio and numeros[j]>chaveNum){
            numeros[j+1] = numeros[j];
            nomes[j+1] = nomes[j];
            j--;
        }

        numeros[j+1] = chaveNum;
        nomes[j+1] = chaveNome;
    }
}

int main(){
    string nomeArquivo = "fases.txt";

    //Contar quantas linhas tem
    int tamanho = contarLinhas(nomeArquivo);

    //Declarar vetores
    int numeros[tamanho];
    string nomes[tamanho];

    //Ler dados do arquivo
    lerArquivo(nomeArquivo, numeros, nomes, tamanho);

    int K;
    cin >> K;

    //Ordenar K primeiros em descrescente
    insertionSortD(numeros, nomes, K);

    //Ordenar restante em crescente
    insertionSortC(numeros, nomes, K, tamanho);

    //Imprimir resultados
    for(int i=0; i<tamanho; i++){
        cout << nomes[i] << endl;
    }

    return 0;
}