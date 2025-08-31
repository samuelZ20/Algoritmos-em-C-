#include <iostream>
#include <fstream>
#include <cstdlib>


using namespace std;

int main()
{
    char nomeAP[100]; // tem 100 letrinhas
    char nomeAI[100];
    char nomeAD[100];

    cin >> nomeAP;
    cin >> nomeAI;
    cin >> nomeAD;

    char palavraP, palavraI;

    ifstream arqP(nomeAP);
    ifstream arqI(nomeAI);
    ofstream arqD(nomeAD); // arquivo saida

    // A exclamaão eh mesmo que a negação
    // se for V se torna F
    if(!arqP and !arqI){  // se nenhum dos dois arquivos existirem, acontecerá isso
        cout << "arquivo nao existem"<< endl;
        return 1;
    } // fim do if

    while(!arqP.eof() and !arqI.eof()) {
        arqP.getline(palavraP, 100);
        arqI.getline(palavraI, 100);




    return 0;
}
