#include <iostream>

using namespace std;

int main()
{
    char vet[10];
    char prova1[10], prova2[10];

    for(int i=0; i<10; i++){
        cin >> vet[i];

    }

    for(int i=0; i<10; i++){
        cin >> prova1[i];
    }

     for(int i=0; i<10; i++){
        cin >> prova2[i];
    }

//Verificar o gabarito da prova 1
    int acertosProva1=0;
    int acertosProva2=0;

    for(int i=0; i<10; i++){

        if(prova1[i]== vet[i]){
            acertosProva1++;
        }

        if(prova2[i]==vet[i]){
            acertosProva2++;
        }
    }

        cout <<  acertosProva1 << endl;

        //Vendo se o aluno1 foi aprovado ou reprovado
         if (acertosProva1>=6){
    cout << "APROVADO" << endl;
   }
   else{
    cout << "REPROVADO" << endl;
   }

        cout << acertosProva2 << endl;

        //Vendo se o aluno2 foi aprovado ou reprovado
        if (acertosProva2>=6){
    cout << "APROVADO" << endl;
   }
   else{
    cout << "REPROVADO" << endl;
   }


    return 0;
}
