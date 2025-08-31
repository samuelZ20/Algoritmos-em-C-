#include <iostream>
using namespace std;

bool existeNoVetor(int*vet, int tamanho, int valor){
    for(int i=0; i<tamanho; i++){
        if(vet[i]==valor){
            return true;
        }
    }
    return false;
}



int main(){

int a;
cin >> a;

int* vetA = new int[a];
for(int i=0; i<a; i++){
    cin >> vetA[i];
}

int b;
cin >> b;

int* vetB = new int[b];
for(int i=0; i<b; i++){
    cin >> vetB[i];
}


int* vetC = new int[a+b];
int tamanhoC = 0;

// copiar elementos de A para C
for(int i=0; i<a; i++){
    vetC[tamanhoC++]= vetA[i];
}

//copiar elementos de B que ainda nao estao em C
for(int i=0; i<b; i++){
    if(!existeNoVetor(vetC, tamanhoC, vetB[i])){
        vetC[tamanhoC++]=vetB[i];
    }
}


//exibir vetorC
for(int i=0; i<tamanhoC; i++){
    cout << vetC[i] << " " ;
}

delete[] vetA;
delete[] vetB;
delete[] vetC;

    return 0;
}