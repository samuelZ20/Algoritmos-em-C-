#include <iostream>

using namespace std;

int main()
{
    int numero;
    int i=1;
    int soma=0;
    int contador=0;

    cout << "Digite 5 numeros: " << endl;

    while(i<=5){
    cin >> numero;
    contador++;
    soma = soma + numero;
    i++;
    }

    cout << "A soma dos numero e: " << soma << endl;
    cout << "A media dos numeros e: " << soma/contador << endl;


    return 0;
}
