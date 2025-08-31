#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int* vet= new int[n];
    int* vetM2= new int[n];
    int* vetM3= new int[n];
    int* vet23= new int[n];
    int tam2=0, tam3=0, tam23=0;

    //Lendo os valores do vetor

    for(int i=0; i<n; i++){
        cin >> vet[i];
    }


    //Verificando os multiplos de 2

for (int i=0; i<n; i++){
    if(vet[i]%2==0){
        vetM2[tam2] = vet[i];
        tam2++;
    }
}

    //Imprimindo os multiplos de 2

    if(tam2==0){
        cout<< "0";
    }
    else{
    for(int i=0; i<tam2; i++){
        cout << vetM2[i] << " ";
    }
    }
cout << endl;


    //Verificando os multiplos de 3

for(int i=0; i<n; i++){
    if(vet[i]%3==0){
        vetM3[tam3]= vet[i];
        tam3++;
    }
}


    //Imprimindo os multiplos de 3
    if(tam3==0){
    cout<< "0";
}

else{
    for(int i=0; i<tam3; i++){
        cout << vetM3[i] << " ";
    }
}
cout << endl;


//Verificando os multiplos de 2 e 3 ao mesmo tempo

for(int i=0; i<n; i++){
    if(vet[i]%2==0 and vet[i]%3==0){
            vet23[tam23]= vet[i];
            tam23++;
    }
}

//Imprimindo os multiplos de 2 e 3
if(tam23==0){
    cout<< "0";
}
else{
for(int i=0; i<tam23; i++){
    cout << vet23[i] << " ";
}
}

cout<< endl;


delete[] vet;
delete[] vetM2;
delete[] vetM3;
delete[] vet23;



    return 0;


}
