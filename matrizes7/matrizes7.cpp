#include <iostream>
using namespace std;

// Função auxiliar para verificar se um caractere é vogal maiúscula
bool ehVogal(char c) {
    return c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

int main() {
    char matriz[6][6];

    // Lendo a matriz
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            cin >> matriz[i][j];
        }
    }

    bool encontrou = false;

    // Verificar todas as possíveis submatrizes 3x3
    for (int i = 0; i <= 3 && !encontrou; i++) {
        for (int j = 0; j <= 3 && !encontrou; j++) {
            bool todasVogais = true;

            // Verificar se a submatriz 3x3 a partir de (i, j) só tem vogais
            for (int x = i; x < i + 3 && todasVogais; x++) {
                for (int y = j; y < j + 3 && todasVogais; y++) {
                    if (!ehVogal(matriz[x][y])) {
                        todasVogais = false;
                    }
                }
            }

            // Se encontrou uma submatriz 3x3 só com vogais, imprime
            if (todasVogais) {
                for (int x = i; x < i + 3; x++) {
                    for (int y = j; y < j + 3; y++) {
                        cout << matriz[x][y];
                        if (y < j + 2) cout << " ";
                    }
                    cout << endl;
                }
                encontrou = true;
            }
        }
    }

    if (!encontrou) {
        cout << "submatriz nao encontrada" << endl;
    }

    return 0;
}
