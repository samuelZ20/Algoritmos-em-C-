#include <iostream>

using namespace std;

int main(){
int n;
cin >> n;

int vet[n];
for(int i=0; i<n; i++){
    cin >> vet[i];
}

//Verificando
int novoTamanho=0;
for(int i=0; i<n; i++){
    int duplicado=0;

    for(int j=0; j<novoTamanho and duplicado==0; j++){
        if(vet[i]==vet[j]){
            duplicado=1;
        }
    }

    if(duplicado==0){
        vet[novoTamanho]= vet[i];
        novoTamanho++;
    }
}

//imprimindo quantos elementos possui
cout << novoTamanho <<endl;

//imprimindo resultado do novo vetor
for(int i=0; i<novoTamanho; i++){
    cout << vet[i] << " ";
}











    return 0;
}