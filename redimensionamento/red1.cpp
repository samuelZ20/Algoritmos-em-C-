#include <iostream>

using namespace std;

int main(){
int n;
cin >> n;

//Criando o vetor
int* vet = new int[n];

//Lendo o vetor
for(int i=0; i<n; i++){
    cin >> vet[i];
}

//Verificando o novo tamanho
int novoTamanho =0;

for(int i=0; i<n; i++){
    if(vet[i]%2==0 or (vet[i]%2!=0 and vet[i]%3!=0)){
        novoTamanho++;
    }
}

//Criando o novo vetor e passando os valores para ele
int* novoVet = new int[novoTamanho];
int j=0;

for(int i=0; i<n ; i++){
    if(vet[i]%2==0 or (vet[i]%2!=0 and vet[i]%3!=0)){
        novoVet[j] = vet[i];
        j++;
    }
}

//Liberar memoria, apontar para o novo vetor e imprimir
delete[] vet;
vet = novoVet;
n = novoTamanho;

cout << n << endl;

for(int i=0; i<n; i++){
    cout << vet[i] << " ";
}
    return 0;
}