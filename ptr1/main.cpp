#include <iostream>

using namespace std;

int main(){
int n;

//Lendo o tamanho do vetor
cin >> n;

//Introduzindo o vetor e colocando os seus valores
int* vet= new int[n];

for(int i=0; i<n; i++){
    cin >> vet[i];
}

bool capicua = true;
bool parar=false;
//Verificando

for(int i=0; i<n/2; i++){

    if(!parar and vet[i]==vet[n-1-i]){
       cout << i << " " << vet[i] << " " << (n-1-i) << " " << vet[n-1-i] << " ";
    }

    else if(vet[i]!=vet[n-1-i]){
        capicua=false;
        parar= true;
    }
}

cout << endl;

if(capicua){
    cout << "sim"<< endl;
}
else{
    cout << "nao" << endl;
}

delete[]vet;
return 0;


    return 0;
}