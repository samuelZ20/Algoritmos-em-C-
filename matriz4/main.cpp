#include <iostream>
using namespace std;
int main(){

int matriz[7][7];
int distancia;

//Lendo a distancia partindo do centro
cin >> distancia;

//Lendo a matriz
for(int i=0; i<7; i++){
    for(int j=0; j<7; j++){
        cin >> matriz[i][j];
    }
}

//Verificando os vermelhos
int soma=0;
int inicio= 3-distancia;
int fim= 3+distancia;

for(int i=inicio; i<=fim; i++ ){
    for(int j= inicio; j<=fim; j++ ){

        if( i==inicio or i==fim or j==inicio or j==fim){
            soma = soma + matriz[i][j];
        }
    }
}

//Imprimindo a soma dos vermelhos

cout << soma;















 return 0;
}
