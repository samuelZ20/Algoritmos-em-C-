#include <iostream>

using namespace std;

int main(){

int n;

//Lendos o valor de n
cin >> n;

int* vetA=new int[n];
int* vetB=new int[n];


//Lendo os valores do vetA
for(int i=0; i<n; i++){
    cin >> vetA[i];
}

//Lendo os valores do vetB
for(int i=0; i<n; i++){
    cin >> vetB[i];
}

//Verificando se sao iguais ou diferentes
int iguais=0;

for(int i=0; i<n; i++){
    int encontrado =0;
    for(int j=0; j<n; j++){
        if(vetA[i]==vetB[j]){
            encontrado=1;
        }
    }
    iguais= iguais+encontrado;
}

if(iguais==n){
    cout << "IGUAIS" << endl;
}

else{
    cout << "DIFERENTES" << endl;
}

delete[] vetA;
delete[] vetB;


    return 0;
}
