#include <iostream>

using namespace std;

int main()
{
    int numero;
    int contador =0;

    cout << "Digite um numero: ";
    cin >> numero;

    if(numero<0){
        numero = -numero;
    }

    while (numero>0){
        numero = numero/10;
        contador++;
    }

    if(contador==0){
        contador = 1;
    }


    cout << "O numero tem: " << contador << " digitos" << endl;

    return 0;
}
