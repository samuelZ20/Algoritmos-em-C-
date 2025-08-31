#include <iostream>
using namespace std;

void insertionSort(int vet[], int n){
    for(int i=1; i<n; i++){
        int chave = vet[i];
        int j= i-1;

        while(j>=0 and vet[j]>chave){
            vet[j+1] = vet[j];
            j--;
        }
        
        vet[j+1] = chave;
    }
}

int main(){
    int vet[10];

    for(int i=0;i<10; i++){
        cin >> vet[i];
    }

    insertionSort(vet,10);
    
    for(int i=0; i<10; i++){
        cout << vet[i] << " ";
    }
return 0;
}