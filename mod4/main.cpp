#include <iostream>
#include <iomanip>
using namespace std;

float calcularInclinacao(int altura, int base) {
    return (float)(altura * 100) / base; // Garantir divisão com ponto flutuante
}

int main() {
    int n;
    cin >> n;

    int altura, base;
    int rampasAdequadas = 0;

    cout << fixed << setprecision(1); // Mostrar 1 casa decimal

    for (int i = 0; i < n; i++) {
        cin >> altura >> base;

        float inclinacao = calcularInclinacao(altura, base);
        cout << inclinacao << endl;

        if (inclinacao <= 8.0) {
            rampasAdequadas++;
        }
    }

    cout << rampasAdequadas << endl;
