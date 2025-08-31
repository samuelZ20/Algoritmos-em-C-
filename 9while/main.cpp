#include <iostream>

using namespace std;

int main()
{
    int numero;

    cout << "Digite um numero: ";
    cin >> numero;

    int i=0;
    int soma=0;

    while(i<=numero){
        soma=soma+i;
        i++;
    }

    cout << "O somatorio e: " << soma << endl;
    return 0;
}
