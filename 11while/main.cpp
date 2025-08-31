#include <iostream>

using namespace std;

int main()
{
    string nome1, nome2, nome3;
    int qtdvotos;

    cout << "Digite o nome dos 3 competidores: "<< endl;
    cin >> nome1 >> nome2 >> nome3;

    cout << "Digite a quantidade de votos: " << endl;
    cin >> qtdvotos;

    int i=0;
    int contador1=0;
    int contador2=0;
    int contador3=0;
    string voto;

    while(i<qtdvotos){
        cout << "Digite o nome do candidato: " << endl;
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

    if(contador1>contador2 and contador1>contador3){
        cout << "Vencedor: " << nome1 << " com: " << contador1 << "votos" << endl;
    }

    else if(contador2>contador1 and contador2>contador3){
        cout << "Vencedor: " << nome2 << "com: " << contador2 << "votos" << endl;
    }
    else if (contador3>contador2 and contador3>contador1){
        cout << "Vencedor: " << nome3 << " com: " << contador3 << "votos" << endl;
    }
    else {
        cout << "HOUVE EMPATE" << endl;
    }


    return 0;
}
