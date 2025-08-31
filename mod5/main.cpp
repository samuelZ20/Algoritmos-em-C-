#include <iostream>
#include <fstream>

using namespace std;

int naoEhMultiplo3(int n){
   return n%3!=0;
}

int main()
{

    string arquivo;
    cin >> arquivo;

    ifstream entrada (arquivo);
    int n;


    ofstream saida ("saida.txt");
    while(entrada >> n){
        if(naoEhMultiplo3(n)){
            saida << n << " ";
        }

    }

    saida.close();


    return 0;
}
