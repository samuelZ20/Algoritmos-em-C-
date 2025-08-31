#include <iostream>

using namespace std;

int main()
{
   int vet[20];

   for(int i=0; i<20; i++){
    cin >> vet[i];
   }

// Exibir quantas vezes cada um apareceu

int cont1=0;
int cont2=0;
int cont3=0;
int cont4=0;
int cont5=0;
int cont6=0;


for(int i=0; i<20; i++){
    if(vet[i]==1){
        cont1++;
    }

    else if(vet[i]==2){
        cont2++;
    }

    else if(vet[i]==3){
        cont3++;
    }

    else if(vet[i]==4){
        cont4++;
    }

    else if(vet[i]==5){
        cont5++;
    }
    else if (vet[i]==6){
        cont6++;
    }
}


    cout << "1: " << double(cont1)/20 << endl;
    cout << "2: " << double(cont2)/20 << endl;
    cout << "3: " << double(cont3)/20 << endl;
    cout << "4: " << double(cont4)/20 << endl;
    cout << "5: " << double(cont5)/20 << endl;
    cout << "6: " << double(cont6)/20 << endl;
    return 0;
}
