#include <iostream>

using namespace std;

int main()
{
    int matriz [15][15];

//Le a matriz do jogo
for(int i=0; i<15; i++){
    for(int j=0; j<15; j++){
        cin >> matriz[i][j];
    }
}

//Le os tres tiros e processa cada um
for(int i=0; i<3; i++){
    int linha, coluna;
    cin >> linha >> coluna;


int valor= matriz[linha][coluna];

if(valor==1){
    cout << "destroier" << endl;
}

else if(valor==2){
    cout << "fragata" << endl;
}

else if(valor==3){
    cout << "lancha" << endl;
}

else{
    cout << "agua" << endl;
}
}

    return 0;
}
