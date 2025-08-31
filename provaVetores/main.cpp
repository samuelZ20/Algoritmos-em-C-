#include <iostream>
#include <fstream>

using namespace std;

int main(){
ifstream entrada ("entrada.txt");

int n;

//Lendo o tamanho do vetor A
entrada >> n;
float vetA[n];

//recebendo os valores do vetor A
for(int i=0; i<n; i++){
    entrada >> vetA[i];
}


int k;
//Lendo o tamanho do vetor B
entrada >> k;
int vetB[k];

//recebendo os valores do vetor B
for(int i=0; i<k; i++){
    entrada >> vetB[i];
}

//Testando os valores do vetor A

for(int i=0; i<n; i++){
    cout << vetA[i] << " ";
}
cout << endl;

//Testando os valores do vetor B

for(int i=0; i<k; i++){
    cout << vetB[i] << " ";
}

















return 0;
}
