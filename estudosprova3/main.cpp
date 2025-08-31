#include <iostream>
#include <fstream>
using namespace std;

struct Fase{

int numero;
string nomes;
};

int contarLinhas(const string& nomeArquivo){

ifstream arquivo (nomeArquivo);
int linhas=0;
int numero;
string nomes;

while(arquivo>>numero>>nomes){
    linhas++;
}

arquivo.close();
return linhas;

}


void insertionSortD(Fase fases[], int n){
for(int i=0; i<n; i++){
    Fase chave = fases[i];
    int j=i-1;

    while(j>=0 and fases[j].numero<chave.numero){
        fases[j+1] = fases[j];
        j--;
    }
    fases[j+1] = chave;
}
}


void insertionSortC(Fase fases[], int inicio, int fim){
for(int i=inicio+1; i<fim; i++){
    Fase chave = fases[i];
    int j=i-1;

    while(j>=0 and fases[j].numero>chave.numero){
        fases[j+1] = fases[j];
        j--;
    }
    fases[j+1]=chave;
}
}


int main(){

string const nomeArquivo = "fases.txt";

int tamanho = contarLinhas(nomeArquivo);
Fase fases[tamanho];

//Ler dados
ifstream arquivo(nomeArquivo);
for(int i=0; i<tamanho; i++){
    arquivo >> fases[i].numero >> fases[i].nomes;
}

arquivo.close();


int K;
cin >> K;

insertionSortD(fases, K);
insertionSortC(fases,K, tamanho);

for(int i=0; i<tamanho; i++){
    cout << fases[i].nomes << endl;
}











}
