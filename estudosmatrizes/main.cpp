#include <iostream>
using namespace std;
int main(){

int matriz[6][6];

//Lendo a matriz

for(int i=0; i<6; i++){
    for(int j=0; j<6; j++){
        cin >> matriz[i][j];
    }
}

//Lendo a matriz rotacionada
int matrizRotacionada[6][6];

for(int i=0; i<6; i++){
    for(int j=0; j<6; j++){
        matrizRotacionada[i][j] = matriz[j][5-i];
    }
}

//Imprimir matriz rotacionada
for(int i=0; i<6; i++){
    for(int j=0; j<6; j++){
        cout << matrizRotacionada[i][j] << " ";
    }
}
 return 0;
}
