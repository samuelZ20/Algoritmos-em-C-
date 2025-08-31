#include <iostream>

void imprimirTriangulo(int n){

int numero=1;

for(int linha=0; linha<=n;linha++){
    for(int coluna=0; coluna<=linha;coluna++){
        cout << numero << " ";
        numero++;
    }
    cout << endl;
}
}

int main(){
    int n;
    cin >> n;

    imprimirTriangulo(n);

    return 0;
}
