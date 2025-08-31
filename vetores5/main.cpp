
#include <iostream>

using namespace std;

int main()
{
     float vet[10];
     int i=0;
     float positivo[10], negativo[10];
     int tamPositivo=0, tamNegativo=0;
     float somaNegativos=0;
//Entrada de dados
    while(i<10){
        cin >> vet[i];
        i++;
    }

//Verificar quando é negativo e quando é positivo

for(int i=0; i<10; i++){

    if(vet[i]>=0){
        positivo[i]=vet[i];
        tamPositivo++;
    }

    else{
        negativo[i]= vet[i];
        somaNegativos = somaNegativos + negativo[i];
        tamNegativo++;
    }
}


//Imprimir quantidade de numeros positivos

cout <<  tamPositivo << endl;

//Soma dos numeros negativos:

cout <<  somaNegativos << endl;
    return 0;
}
