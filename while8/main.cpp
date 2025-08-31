#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string arquivo;
    cin >> arquivo;

    ifstream entrada (arquivo);


    char letra;
    int contador =0;

    while (entrada.get(letra)) {// le caractere por caractere
    if( letra == 'a' or letra =='A' or
        letra == 'e' or letra =='E' or
        letra == 'i' or letra =='I' or
        letra == 'o' or letra =='O' or
        letra == 'u' or letra =='U' ){
        contador++;
        }
    }

    cout << contador << endl;

    return 0;
}
