#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    double vet[7];
    int i=0;

    while(i<7){
        cin >> vet[i];
        i++;
    }


    double soma=0;
    i=0;

    while(i<7){
        soma= soma + vet[i];
        i++;
    }

    double media = soma/7;



    int abaixoMedia=0;
    double menor= vet[0];
    i=0;


    while(i<7){
        if(vet[i]<media){
            abaixoMedia++;
        }

        if(vet[i]<menor){
            menor = vet[i];
        }
        i++;
    }

    cout << fixed << setprecision(2)<< endl;
     cout << media << endl;
     cout << abaixoMedia << endl;
     cout << menor << endl;



    return 0;
}
