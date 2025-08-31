#include <iostream>

using namespace std;

int main()
{
  float matriz [4][4];

//Lendo os valores da matriz
for(int i=0; i<4; i++){
    for(int j=0; j<4; j++){
        cin >> matriz[i][j];
    }
}

//Lendo a quantidade de cidades
int n;
cin >> n;

//Lendo os itinerarios
int itinerario[n];

for(int i=0; i<n; i++){
    cin >> itinerario[i];
}

//Calculando o custo

float custo =0;

for(int i=0; i<n-1; i++){
    int origem= itinerario[i];
    int destino= itinerario[i+1];
    custo = custo + matriz[origem][destino];
}

cout << custo << endl;

return 0;
}
