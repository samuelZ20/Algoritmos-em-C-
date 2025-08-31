#include <iostream>

using namespace std;

int main()
{

cout << "---------- PROBLEMA DO TWO SUM ----------" << endl;

int n;
cout << "Digite o tamanho do vetor: " << endl;
cin >> n;

int vet[n];
cout << "Qual os valores do vetor: " << endl;
for(int i=0; i<n; i++){
    cin >> vet[i];
}

int k;
cout << "Qual e o valor do target: " << endl;
cin >> k;


for(int i=0; i<n; i++){
    for(int j=1; j<n; j++){
        if(vet[i]+vet[j]==k and i!=j){
            cout << "a posicao dos valores e: " <<  i << " " << j << endl;
        }
    }
}

return 0;
}
