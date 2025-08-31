#include <iostream>

using namespace std;

int main()
{
    int numero1, numero2;

    cout << "Digite dois numeros: " ;
    cin >> numero1 >> numero2;

    int contador=0;

    if(numero1<numero2){
        int i= numero1+1;

        while (i<numero2){
            contador++;
            i++;
        }
    }

    else if(numero1>numero2){
        int i= numero2+1;

        while(i<numero1){
            contador++;
            i++;
        }
    }

    cout << "A quantidade de numeros compreendidos entre esses numeros sao: " << contador << endl;

    return 0;
}
