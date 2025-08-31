#include <iostream>

using namespace std;

int main()
{
    int i=1;
    int soma=0;

    while(i<50){
        if(i%2!=0){
            cout << i << endl;
            soma=soma+i;
        }
        i++;

    }
    cout << "A soma desses numeros e: " << soma << endl;

    return 0;
}
