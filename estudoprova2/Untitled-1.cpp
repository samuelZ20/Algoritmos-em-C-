#include <iostream>
#include <fstream>
using namespace std;

int main(){

    ifstream entrada ("entrada.txt");

//Começar vetor A
int n;
entrada >> n;
float vetA[n];

//Lendo o vetor A
for(int i=0; i<n; i++){
    entrada >> vetA[i];
}


//Começar vetor B
int m;
entrada >> m;
int vetB[m];

//Lendo o vetor B
for(int i=0; i<m; i++){
    entrada >> vetB[i];
}

//Verificando o maior e o menor
float maior= vetA[vetB[0]];
float menor= vetA[vetB[0]];

for(int i=0; i<m; i++){

    int pos= vetB[i];

    if(pos>=0 and pos<n){
        float valor = vetA[pos];


    if(valor>maior){
        maior = valor;
    }
    if(valor<menor){
        menor = valor;
    }
}

}

cout << maior - menor << endl;




















    return 0;
}
