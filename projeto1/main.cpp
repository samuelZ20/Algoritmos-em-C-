#include <iostream>

using namespace std;

int main()
{
    int limite, base;

    cout << "Informe dois numeros, um limite e um base: "<< endl;
    cin >> limite >> base;

    if(base==0){
        cout << "A base nao pode ser zero!"<<endl;
        return 0;
    }

    int soma=0;
    int i = base;


    while(i<=limite){
       cout << i << " ";
       soma=soma + i;
       i = i + base;
    }

    cout << endl;
    cout << soma << endl;


    return 0;
  }

