#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>> n;

    if(n<=0){
        cout << endl;
        return 0;
    }

    int* vetA= new int[n];

//Lendo os valores do vet A
for(int i=0; i<n; i++){
    cin>> vetA[i];
}

//Lendo os delimitadores O e P
int o, p;
cin >> o;
cin >> p;


//Verificacao de indices validos
if(o<0 or o>=n or p<0 or p>=n){
    delete[] vetA;
    return 0;
}

int menor= vetA[o];
int maior= vetA[p];

//Se o vetA[o] for maior que vetA[p], troque os valores para facilitar comparacao
if(menor>maior){
    int temp=menor;

    menor= maior;
    maior= temp;
}


//Lendo os valores entre M e N
for(int i=0; i<n;i++){
    if(vetA[i]>menor and vetA[i]<maior){
        cout << vetA[i] << " ";
    }
}

    delete[] vetA;
    return 0;
}
