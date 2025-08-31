#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double vet[7];
    int i=0;
    double soma=0;

//Lendo o valor de cada temperatura
    while(i<7){
        cin >> vet[i];
        i++;
    }

//Verificando a soma dos vetores

for(int i=0; i<7; i++){
    soma = soma + vet[i];
}

//Imprimindo a media

double media = soma/7;

cout << fixed << setprecision(1) << endl;
cout << "A media das temperaturas e: " << media << endl;


//Verificando temperatura acima da media
int acimaMedia=0;

for(int i=0; i<7; i++){
    if(vet[i]>media){
        acimaMedia++;
    }
}

//Imprimir quantos dias estao acima da media

cout << "Os dias que estao acima da media sao: " << acimaMedia << endl;

//Verificar o de maior temperatura

double maiorTemp = vet[0];

for(int i=0; i<7; i++){
    if(vet[i]>maiorTemp){
        maiorTemp = vet[i];
    }
}

//Imprimindo a maior temperatura

cout << "A maior temperatura e: " << maiorTemp << endl;


    return 0;
}
