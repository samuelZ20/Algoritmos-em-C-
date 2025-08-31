#include <iostream>
using namespace std;

int main(){

int matriz[6][6];

//Lendo os dados da matriz
for(int i=0; i<6;i++){
    for(int j=0; j<6; j++){
        cin >> matriz[i][j];
    }
}

//Verificanndo a matrizRotacionada

int matrizRotacionada[6][6];

for(int i=0; i<6; i++){
    for(int j=0; j<6; j++){
        matrizRotacionada[i][j] = matriz[j][5-i];
    }
}

//Imprimindo a matriz rotacionada
for(int i=0; i<6; i++){
    for(int j=0; j<6; j++){
        cout << matrizRotacionada[i][j] << " ";
    }
    cout << endl;
}











    return 0;
}