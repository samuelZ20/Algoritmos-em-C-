#include <iostream>
#include <fstream>

using namespace std;

struct Produto{
int numero;
string nomes;
};

int contarLinhas(const string& nomeArquivo){
ifstream arquivo (nomeArquivo);
int linhas=0;
int numeros;
string nomes;

while(arquivo>>numeros>>nomes){
    linhas++;
}

arquivo.close();
return linhas;

}

void insertionSortC(Produto produtos[], int n){

for(int i=1; i<n; i++){
   Produto chave = produtos[i];
   int j=i-1;

   while(j>=0 and produtos[j].nomes>chave.nomes){

    produtos[j+1] = produtos[j];
    j--;
   }

   produtos[j+1]=chave;
}
}

int main()
{

    const string nomeArquivo = "produtos.txt";

    int tamanho= contarLinhas(nomeArquivo);
    Produto produtos[tamanho];

    //Ler os dados
    ifstream arquivo(nomeArquivo);
    for(int i=0; i<tamanho; i++){
        arquivo >> produtos[i].numero >> produtos[i].nomes;
    }

    arquivo.close();


    insertionSortC(produtos, tamanho);
    for(int i=0; i<tamanho; i++){
        cout << produtos[i].nomes << endl;
    }

    return 0;
}
