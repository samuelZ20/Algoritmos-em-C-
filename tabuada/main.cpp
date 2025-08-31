#include <iostream>

using namespace std;

int main()
{
    int numero;

    cout << "Digite o numero que voce queira uma tabuada: ";
    cin >> numero;

    int i =1;

    while (i<=numero){
        cout << numero << "x" << i << "= " << numero * i << endl;
        i++;
    }


    return 0;
}
