#include <iostream>

using namespace std;

int main(){

int n;
cin >> n;

//Criando o vetor
int* vetor= new int[n];

//Lendo o vetor
for(int i=0; i<n; i++){
    cin >> vetor[i];
}

//Contar elementos nao negativos (positivos)
int novoTamanho = 0;

for(int i=0; i<n; i++){
    if(vetor[i]>=0){
        novoTamanho++;
    }
}


//Criar e preencher novo vetor
int* novoVetor = new int [novoTamanho];
int j=0;

for(int i=0; i<n; i++){
    if(vetor[i]>=0){
        novoVetor[j]= vetor[i];
        j++;
    }
}

//Liberar memoria, apontar para o novo vetor e imprimir

delete[] vetor;
vetor = novoVetor; // vetor agora aponta para o vetor novo
n = novoTamanho; // atualiza o valor de n

cout << n << endl;

for(int i=0; i<n; i++){
    cout << vetor[i] << " ";
}
cout << endl;

delete[] vetor;
return 0;

}