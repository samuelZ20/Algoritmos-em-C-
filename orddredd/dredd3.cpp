#include <iostream>
using namespace std;

void imprimirVetor (int vet[], int n){
    for(int i=0; i<n; i++){
        cout << vet[i] << " ";
    }
    cout << endl;
}

void insertionSort(int vet[], int n){
    for(int i=0; i<n; i++){
        int indiceMenor=0;

        for(int j=1; j<n-i; j++){
            if(vet[j]<vet[indiceMenor]){
                indiceMenor = j;
            }
        }

        int temp = vet[indiceMenor];
        vet[indiceMenor] = vet[n-i-1];
        vet[n-i-1]=temp;

        imprimirVetor(vet,n);
    }

    }


int main(){
    int n;
    cin >> n;

    int vet[n];
    for(int i=0; i<n; i++){
        cin >> vet[i];
    }

    insertionSort(vet,n);

    return 0;
}