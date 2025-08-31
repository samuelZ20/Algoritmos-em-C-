#include <iostream>

using namespace std;

int main(){

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

double media= soma/7;


int acimaMedia=0;
double maior = vet[0];
i=0;


while(i<7){

    if(vet[i]>media){
        acimaMedia++;
    }

    if(vet[i]>maior){
        maior = vet[i];
    }

    i++;
}


    cout << media << endl;
    cout << acimaMedia << endl;
    cout << maior << endl;

return 0;
}
