#include <iostream>

using namespace std;

int main()
{
    char monstro;
    int npessoa, tempo;

    cin >> monstro >> npessoa >> tempo;


// Tipo de monstro

   if (monstro=='z' or monstro =='m'){
    cout << "1";
   }

   else if(monstro =='l' or monstro == 'd'){
    cout <<"2";
   }

   else if (monstro=='h' or monstro=='s'){
    cout << "3";
   }

   else if (monstro=='v' or monstro =='f'){
    cout << "4";
   }


// Numero de pessoas


   if(npessoa==1){
    cout <<"1";
   }

   else if(npessoa==2){
    cout<< "2";
   }

   else {
    cout << "3";
   }


// Tempo

   if(tempo==1 or tempo==2){
    cout <<"1";
   }

   else if(tempo==3 or tempo==4){
    cout <<"2";
   }

   else if(tempo==5 or tempo==6){
    cout << "3";
   }

   else {
    cout << "4";
   }

   return 0;
}
