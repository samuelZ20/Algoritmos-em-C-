#include <iostream>

using namespace std;

void imprimirTabuleiro (int n){

for ( int linhas=0; linhas < n ; linhas++){

    for (int coluna=0; coluna < n; coluna++){

        if((linhas+coluna)%2==0){
            cout << ".";
        }

        else{
            cout << "#";
        }
    }
 cout << endl;
 }
}

int main()
{
    int n;
    cin >> n;

    imprimirTabuleiro(n);

    return 0;
}
