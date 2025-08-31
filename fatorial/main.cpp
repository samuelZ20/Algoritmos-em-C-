#include <iostream>

using namespace std;

int main()
{
    int numero;

    cout << "Digite um numero: ";
    cin >> numero;

    int i=1;
    int fatorial=1;

    while (i<=numero){
        fatorial = fatorial * i;
        i++;
    }

    cout << fatorial<< endl;
    return 0;
}
