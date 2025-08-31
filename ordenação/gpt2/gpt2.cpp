#include <iostream>
#include <fstream>
using namespace std;

void insertionSort (string nomes[], int n){
    for(int i=1; i<n; i++){
        string chave = nomes[i];
        int j=i-1;
        
        while(j>=0 and nomes[j]>chave){
            nomes[j+1] = nomes[j];
            j--;
        }

        nomes[j+1] = chave;
    }
}

int main(){
    const int MAX=100;
    string nomes[MAX];
    int quantidade=0;

    ifstream arquivo("nomes.txt");

    while(getline(arquivo,nomes[quantidade]) and quantidade<MAX){
        quantidade++;
    }

    arquivo.close();

    insertionSort(nomes,quantidade);

    for(int i=0; i<quantidade; i++){
        cout << nomes[i] << endl;
    }

    return 0;
}