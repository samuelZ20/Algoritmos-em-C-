#include <iostream>

using namespace std;

int main()
{
    int nota;

    cout << "De uma nota entre 0 e 10: ";
    cin >> nota;

    while(nota>10 or nota<0){
        cout << "Numero invalido, digite novamente: ";
        cin >> nota;
    }

        cout << nota << endl;

    return 0;
}
