#include <iostream>

using namespace std;

int main()
{
    int vet[10];
    int i=0;

    int mult2[10], mult3[10];
    int tam2=0, tam3=0;



 //Lendo os 10 numeros do vetor
    while(i<10){
        cin >> vet[i];
        i++;
    }

 //VERIFICAR SE É MULTIPLO DE 2 OU 3

 for( int i=0; i<10; i++){

    if(vet[i]%2==0){
        mult2[tam2]= vet[i];
        tam2++;
    }

    if(vet[i]%3==0){
        mult3[tam3]= vet[i];
        tam3++;
    }
 }
cout << endl;



 //IMPRIMIR MULTIPLOS DE 2

 for(int i=0; i<tam2; i++){
    cout << mult2[i] << " ";
 }
 cout << endl;

 //IMPRIMIR O MAIOR MULTIPLO DE 2

 int maiorm2 = mult2[0];

 for(int i=1; i<tam2; i++){

    if(mult2[i]>maiorm2){
        maiorm2 = mult2[i];
    }
 }

 cout << maiorm2 << endl;

 //IMPRIMIR MULTIPLOS DE 3

 for(int i=0; i<tam3; i++){
    cout << mult3[i] << " ";
 }
 cout << endl;


 // IMPRIMIR O MAIOR MULTIPLO DE 3

 int maiorm3 = mult3[0];

 for(int i=1; i<tam3; i++){

    if(mult3[i]>maiorm3){
        maiorm3 = mult3[i];
    }
 }

 cout << maiorm3 << endl;

 return 0;
 }
