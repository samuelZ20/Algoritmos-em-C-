#include <iostream>

using namespace std;

int main(){

    int matriz[6][6];

 //Lendo a mtriz
    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            cin >> matriz[i][j];
        }
    }

//Verificando a matrizRotacionada

int rotacionada[6][6];

for(int i=0; i<6; i++){
    for(int j=0; j<6; j++){
        rotacionada[i][j]= matriz[5-i][5-j];
    }
}

//Imprimindo a rotacionada

for(int i=0; i<6; i++){
    for(int j=0 ; j<6; j++){
        cout << rotacionada[i][j] << " ";
    }
    cout << endl;
}















    return 0;
}