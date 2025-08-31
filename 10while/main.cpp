#include <iostream>

using namespace std;

int main()
{
    int numero;
    int fatorial=1;

    cout << "Digite um numero: ";
    cin >> numero;

    int i=numero;

    while(i>1){
        fatorial = fatorial * i;
        i--;
    }

       cout << fatorial;

    return 0;
}
