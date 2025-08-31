#include <iostream>
#include <fstream>

using namespace std;

int main(){

ifstream entrada ("entrada.txt");
int n;
entrada >>n;
float vetA[n];
int vetB[n];

for(int i=0; i<n; i++){
    entrada >> vetA[i];
}

for(int i=0; i<n; i++){
    entrada >> vetB[i];
}

float numerador=0;
for(int i=0; i<n; i++){
    numerador= numerador + (vetA[i]*vetB[i]);
}

float denominador =0;
for(int i=0; i<n; i++){
    denominador= denominador + vetB[i];
}


float media = numerador/denominador;

cout << media << endl;

float maior= vetA[0];
float menor= vetA[0];
for(int i=0; i<n; i++){

    if(vetA[i]>maior){
        maior = vetA[i];
    }

    else if(vetA[i]<menor){
        menor = vetA[i];
    }
}

cout << maior << endl;
cout << menor << endl;












return 0;


}
