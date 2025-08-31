#include <iostream>
using namespace std;

int main(){
int n;
cout << "Digite o tamanho do vetor: " << endl;
cin >> n;

int vet[n];
cout << "Digite os numeros do vetor:" << endl;
for(int i=0; i<n; i++){
    cin >> vet[i];
}

int k;
cout << "Digite o numero que deseja excluir do vetor: " << endl;
cin >> k;

int restantes=0;
for(int i=0; i<n; i++){
    if(vet[i] != k){
    vet[restantes] = vet[i];
    restantes++;
    }
}

cout << "Quantidade de numeros restantes no vetor: " << restantes << endl;
cout << "Vetor resultante ou final: ";
for(int i=0; i<restantes; i++){
    cout << vet[i] << " ";
}

}
