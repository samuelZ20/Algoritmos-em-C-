#include <iostream>

using namespace std;

//Verificar se é primo
bool ehPrimo(int n){

if(n<=1) return false;

for (int i=2; i*i <=n ; i++){
    if(n%i==0)return false;
}
return true;

}




int main()
{
    int vet[9];

//ENTRADA DOS VETORES

    while(i<9){
        cin >> vet[i];
        i++;
    }

//VERIFICAR SE É PRIMO

for ( int i=0; i<9; i++){
    if(ehPrimo(vet[i])){
        cout << vet[i] << " " << i << endl;
    }
}




    return 0;
}
