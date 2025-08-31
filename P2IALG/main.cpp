#include <iostream>

using namespace std;

void imprimirTabuleiro(int n){

for(int linha=0; linha<n; linha++){
    for(int coluna=0; coluna<n; coluna++){
        if((linha+coluna)%2==0){
            cout << ".";
        }
        else{
            cout<<"#";
        }
    }

    cout<<endl;
}
}
int main()
{
    int n;
    cin >> n;

    imprimirTabuleiro(n);

    return 0;
}
