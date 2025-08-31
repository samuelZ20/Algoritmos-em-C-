#include <iostream>
#include <fstream>
using namespace std;

int main()
{
ifstream entrada ("vendas.txt");
ofstream saida ("saida.txt");
int matrizA[5][3];
int matrizB[5][3];
//Lendo a matrizA (mes 1)
for(int i=0; i<5; i++){
    for(int j=0; j<3; j++){
        entrada >> matrizA[i][j];
    }
}

//Lendo a matrizB (mes 2)
for(int i=0; i<5; i++){
    for(int j=0; j<3; j++){
        entrada >> matrizB[i][j];
    }
}


//Soma da duas matrizes
int matrizT[5][3];

for(int i=0; i<5; i++){
    for(int j=0; j<3; j++){
        matrizT[i][j]= matrizA[i][j]+ matrizB[i][j];
    }
}

//Imprimindo a matriz soma

for(int i=0; i<5; i++){
    for(int j=0; j<3; j++){
        saida << matrizT[i][j] << " ";
    }
    cout << endl;
}

//Verificando a maior vendar

int maior = matrizT[0][0];

for(int i=0; i<5; i++){
    for(int j=0; j<3; j++){
        if(matrizT[i][j]>maior){
            maior = matrizT[i][j];
        }
    }
}

saida << maior << endl;


//Somando as colunas
int soma1=0;

for(int i=0; i<5; i++){
   for(int j=0; j<1; j++){
    soma1 = soma1 + matrizT[i][j];
   }
}

int soma2=0;

for(int i=0; i<5; i++){
    for(int j=1; j<2; j++){
        soma2 = soma2 + matrizT[i][j];
    }
}

int soma3=0;

for(int i=0; i<5; i++){
    for(int j=2; j<3; j++){
        soma3 = soma3 + matrizT[i][j];
    }
}

//Imprimindo o total vendido por loja

saida << soma1 << " " << soma2 << " " << soma3 << endl;

//Somando as linhas
int soma4=0;

for(int i=0; i<1; i++){
    for(int j=0; j<3; j++){
        soma4= soma4 + matrizT[i][j];
    }
}

int soma5=0;

for(int i=1; i<2; i++){
    for(int j=0; j<3; j++){
        soma5= soma5 + matrizT[i][j];
    }
}

int soma6=0;

for(int i=2; i<3; i++){
    for(int j=0; j<3; j++){
        soma6 = soma6 + matrizT[i][j];
    }
}

int soma7=0;

for(int i=3; i<4; i++){
    for(int j=0; j<3; j++){
        soma7 = soma7 + matrizT[i][j];
    }
}

int soma8=0;

for(int i=4; i<5; i++){
    for(int j=0; j<3; j++){
        soma8 = soma8 + matrizT[i][j];
    }
}

saida << soma4 << " " << soma5 << " " << soma6 << " " << soma7 << " " << soma8;

saida.close();
return 0;
}
