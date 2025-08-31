#include <iostream>

using namespace std;

float consumoCombustivel (float distancia, float combustivel){

    return distancia/combustivel;
}


int main()
{

    int n; // n viagens
    float distancia, combustivel;
    int consumoEficiente=0;

    cout << "Digite a quantidade de viagens: ";
    cin >> n;

    for (int i=0; i<n ; i++){
        cin >> distancia >> combustivel;

        float consumo = consumoCombustivel (distancia, combustivel);
        cout << consumo << endl;

        if (consumo>=12){
            consumoEficiente++;
        }
    }

    cout << consumoEficiente << endl;
    return 0;
}
