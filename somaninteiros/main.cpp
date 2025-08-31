#include <iostream>

using namespace std;

int main()
{
    int numero;

    cout << "Digite um numero: " << endl;
    cin >> numero;

    int i=1;
    int soma=0;

    while (i<=numero){
        soma = soma + i;
        i++;
    }

    cout << soma;

    return 0;
}
