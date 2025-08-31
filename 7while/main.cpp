#include <iostream>

using namespace std;

int main()
{
   int numeronotas;
   int i=1;
   int contador=0;
   double nota;
   double soma=0;

   cout << "Digite quantas notas vai digitar: ";
   cin >> numeronotas;

   while (i<=numeronotas){
    cout << "Digite uma nota: ";
    cin >> nota;
    contador++;
    i++;
    soma= soma+nota;
   }

   double media= soma/contador;

   cout << "A media das notas e: " << media << endl;



    return 0;
}
