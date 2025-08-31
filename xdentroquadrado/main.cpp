#include <iostream>

using namespace std;

void imprimirQuadrado (int n){

    for(int linha=0; linha<n; linha++){

        for(int coluna=0; coluna<n; coluna++){
            if(linha==coluna){
                cout << "X";
            }

            else if((linha+coluna)== n-1){
                cout << "X";
            }

            else{
                cout << ".";
            }
        }

        cout << endl;
    }
}

int main()
{
    int n;

    cout << "Digite o lado do quadrado: ";
    cin >> n;


    imprimirQuadrado(n);
    return 0;
}
