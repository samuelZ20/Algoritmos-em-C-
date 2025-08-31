#include <iostream>

using namespace std;

int main(){

    string matriz[8][8];

//Lendo os valores da matriz
for(int i=0; i<8; i++){
    for(int j=0; j<8; j++){
        cin >> matriz[i][j];
    }
}

//Verificando a posiçao do peoes
int linhaPeao=-1;
int colunaPeao=-1;
for(int i=0; i<8;i++){
    for(int j=0; j<8; j++){
        if((matriz[i][j]=="2" and matriz[i][j+1]=="0") or (matriz[i][j]=="2" and matriz[i][j-1]=="0") or (matriz[i][j]=="2" and matriz[i+1][j]=="0") or (matriz[i][j]=="2" and matriz[i-1][j]=="0")){
        matriz[linhaPeao][colunaPeao] = matriz[i][j];
        linhaPeao=i;
        colunaPeao=j;
        }
    }
}

cout << linhaPeao << " " << colunaPeao;
















    return 0;
}