#include <iostream>

using namespace std;

void imprimirTriangulo (int n){
    for(int linha=n; linha>=1; linha--){
        for(int i=0; i<linha; i++){
            cout <<"*";
        }
    cout << endl;
    }

}


int main()
{
    int n;

    cout << "Digite o numero de linhas para o triangulo: ";
    cin >> n;


    imprimirTriangulo(n);

    return 0;
}
