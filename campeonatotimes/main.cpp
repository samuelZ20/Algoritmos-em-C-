#include <iostream>

using namespace std;

int main()
{
    string nome1, nome2, nome3;
    int qtdvotos;

    cout << "Quais sao os participantes: " << endl;
    cin >> nome1 >> nome2 >> nome3;

    cout << "Quantos votos terao: ";
    cin >> qtdvotos;

    string voto;
    int i=0;
    int cont1=0;
    int cont2=0;
    int cont3=0;

    while(i<qtdvotos){

    cout << "Digite o seu voto: ";
    cin >> voto;

        if(voto==nome1){
            cont1++;
        }

        else if(voto==nome2){
            cont2++;
        }
        else if(voto==nome3){
            cont3++;
    }
        else{
            cout << "Nome invalido, digite novamente: ";
            cin >> voto;
        }

        i++;
    }


    if(cont1>cont2 and cont1>cont3){
        cout << "O vencedor e: " << nome1 << " com: " << cont1 << " pontos" << endl;
    }

    else if(cont2>cont3 and cont2>cont1){
        cout << "O vencedor e: " << nome2 << " com: " << cont2 << " pontos" << endl;
    }

    else{
        cout << "O vencedor e: " << nome3 << "
        com: " << cont3 << " pontos" << endl;
    }
    return 0;
}
