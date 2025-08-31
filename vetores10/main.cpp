#include <iostream>

using namespace std;

int main()
{
    int vet[15];

    for(int i=0; i<15; i++){
        cin >> vet[i];
    }


//VERIFICANDO O MAIOR
int maior= vet[0];

for(int i=0; i<15; i++){
    if(vet[i]>maior){
        maior = vet[i];
    }
}
    int divisao;
    for(int i=0; i<15; i++){
        divisao = vet[i]/ maior;

        cout << divisao << " ";
    }
    return 0;
}
