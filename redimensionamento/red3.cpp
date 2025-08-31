#include <iostream>

using namespace std;

int main(){

int n;
cin >> n;

//Criar e ler o vetor dinamicamente
int* vet= new int[n];
//Lendo o vetor
for(int i=0; i<n; i++){
    cin >> vet[i];
}

//Vetor auxiliar com capacidade maxima de n

int* semRepetidos = new int[n];
int tamanhoAtual=0;

for(int i=0; i<n; i++){
    bool repetido= false;

    //Verificar se vet[i] ja existe em semRepetidos
    for(int j=0; j<tamanhoAtual; j++){
        if(vet[i]== semRepetidos[j]){
            repetido = true;
        }
    }
        if(!repetido){
            semRepetidos[tamanhoAtual] = vet[i];
            tamanhoAtual++;
        }
    }

//Redimensionar o veotr final
int* resultado = new int[tamanhoAtual];
for(int i=0; i<tamanhoAtual; i++){
    resultado[i] = semRepetidos[i];
}


delete[]vet;
delete[] semRepetidos;

cout << tamanhoAtual << endl;
    for (int i = 0; i < tamanhoAtual; i++) {
        cout << resultado[i] << " ";
    }
    cout << endl;

    delete[] resultado;
    return 0;
}
