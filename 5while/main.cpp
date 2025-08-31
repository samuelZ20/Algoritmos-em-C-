#include <iostream>

using namespace std;

int main()
{
   int numero;
   int maior;
   int i=1;

   cout << "Digite 5 numeros : " << endl;

   while(i<=5){
    cin >> numero;

    if (i==0){
        maior = numero;
    }

    else{
        if(numero>maior){
            maior = numero;
        }
    }
    i++;
   }


   cout << "O maior digitado foi: " << maior << endl;


    return 0;
}
