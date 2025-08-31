#include <iostream>

using namespace std;

int main(){

int num;
cin >> num;

int vet[num];
for(int i=0; i<num; i++){
    cin >> vet[i]; 
}

//Dando um valor de target
int target;
cin >> target;

//Verificacao soma de dois numeros dos vetores igual ao target
for(int i=0; i<num; i++){
    for(int j=i+1; j<num; j++){
        if(vet[i]+vet[j]==target){
            cout << i << " " << j << endl;
            return 0;
        }
    }
}










    return 0;
}