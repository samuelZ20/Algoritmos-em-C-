#include <iostream>
using namespace std;

bool ehPrimo(int num){
    if(num<2){
        return false;
    }

    for(int i=2; i<=num/2; i++){
        if(num%i==0){
            return false;
        }
    }

    return true;
}

int main(){

//Lendo os 9 numeros do vetor
int vet[9];
for(int i=0; i<9; i++){
    cin >> vet[i];
}

for(int i=0; i<9; i++){
    if(ehPrimo(vet[i])){
        cout << vet[i] << " " << i << endl;
    }
}

    return 0;
}