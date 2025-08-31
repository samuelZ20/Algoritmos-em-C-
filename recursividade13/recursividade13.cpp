#include <iostream>

using namespace std;

int menorElemento(int vetor[], int start, int end){
    if(start==end){
        return vetor[start];
    }

    int menorRestante= menorElemento(vetor, start+1, end);
}






int main(){
int n;
cin >> n;


int V[n];

//Lendo o vetor
for(int i=0; i<n; i++){
    cin >> V[i];
}













    return 0;
}