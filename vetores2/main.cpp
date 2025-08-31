#include <iostream>

using namespace std;

int main()
{
    int vet[10];
    int i = 0;

    // Ler as vidas
    while(i < 10){
        cin >> vet[i];
        i++;
    }

    int mortos = 0;
    bool lancarDeNovo = true;

    while (lancarDeNovo) {
        lancarDeNovo = false;

        for (int i = 0; i < 10; i++) {
            if (vet[i] > 0) {
                vet[i] = vet[i] - 1;

                if (vet[i] == 0) {
                    mortos++;
                    lancarDeNovo = true;
                }
            }
        }
    }

    cout << mortos << endl;

    return 0;
}
