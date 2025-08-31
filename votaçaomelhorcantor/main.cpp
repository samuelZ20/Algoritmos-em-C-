#include <iostream>

using namespace std;

int main()
{
    string nome1, nome2, nome3;
    int qtdvotos;

    cout << "De o nome de 3 cantores: " << endl;
    cin >> nome1 >> nome2 >> nome3;

    cout << "De a quantidade de votos: " << endl;
    cin >> qtdvotos;

    int i=1;
    int contador1=0;
    int contador2=0;
    int contador3=0;
    string voto;

    while(i<=qtdvotos){
        cout << "Digite um nome para votar: " << endl;
        cin >> voto;

        if(voto==nome1){
            contador1++;
        }
        else if(voto==nome2){
            contador2++;
        }
        else if(voto==nome3){
            contador3++;
        }

        else{
            cout << "Nome invalido, digite novamente: " << endl;
            continue;
        }

        i++;
    }

    int totalVotos= contador1+contador2+contador3;

    if(contador1>contador2 and contador1>contador3){
        cout << "o vencedor foi: " << nome1 << " com: " << contador1 << " votos " << "e uma porcentagem de: " << (contador1*100/totalVotos) << "%" << endl;
    }

     else if(contador2>contador1 and contador2>contador3){
        cout << "o vencedor foi: " << nome2 << " com: " << contador2 << " votos " << "e uma porcentagem de: " << (contador2*100/totalVotos) << "%" << endl;
    }

     else if(contador3>contador2 and contador3>contador1){
        cout << "o vencedor foi: " << nome3 << " com: " << contador3 << " votos " << "e uma porcentagem de: " << (contador3*100/totalVotos) << "%" << endl;
    }

    else {
        cout << "HOUVE EMPATE";
    }
    return 0;
}
