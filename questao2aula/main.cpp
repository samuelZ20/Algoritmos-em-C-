#include <iostream>

using namespace std;

int main()
{
    int limiteCarga;
    int qtdCavalos, qtdVacas, qtdGalinhas;

    cin >> limiteCarga;
    cin >> qtdCavalos;
    cin >> qtdVacas;
    cin >> qtdGalinhas;

    int pesoCavalo = 250, pesoVaca = 150, pesoGalinha= 2;

    int usadosCavalos=0, usadosVacas=0, usadosGalinhas=0;

    //1.galinha 2.vaca 3. cavalo

    while((qtdGalinhas>0) and limiteCarga>=pesoGalinha){
            limiteCarga-=pesoGalinha;
            qtdGalinhas--;
            usadosGalinhas++;
            cout << "GALINHAS" << endl;
            cout << limiteCarga << " " << qtdGalinhas << " " << usadosGalinhas << endl;

    }//fim do while

     while((qtdVacas>0) and limiteCarga>=pesoVaca){
            limiteCarga-=pesoVaca;
            qtdVacas--;
            usadosVacas++;
            //cout << "VACAS" << endl;
            //cout << limiteCarga << " " << qtdVacas << " " << usadosVacas << endl;
     }


     while((qtdCavalos>0) and limiteCarga>=pesoCavalo){
            limiteCarga-=pesoCavalo;
            qtdCavalos--;
            usadosCavalos++;
            //cout << "CAVALOS" << endl;
            //cout << limiteCarga << " " << qtdCavalos << " " << usadosCavalos << endl;
     }


    return 0;
}//fim do main
