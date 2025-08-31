#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <ctime>

int main() {
    // Lista com os nomes dos amigos
    std::vector<std::string> amigos = {
        "Samuel", "Gustavo", "Carlin", "Joao", "Ricardo", "Estevao", "Pipin", "Augusto"
    };

    // Embaralhar a lista de amigos
    std::srand(unsigned(std::time(0)));
    std::random_shuffle(amigos.begin(), amigos.end());

    // Dividir em duas equipes
    std::vector<std::string> equipe1(amigos.begin(), amigos.begin() + 4);
    std::vector<std::string> equipe2(amigos.begin() + 4, amigos.end());

    // Exibir as equipes
    std::cout << "Equipe 1:\n";
    for (const auto& nome : equipe1) {
        std::cout << "- " << nome << '\n';
    }

    std::cout << "\nEquipe 2:\n";
    for (const auto& nome : equipe2) {
        std::cout << "- " << nome << '\n';
    }

    return 0;
}
