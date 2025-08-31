#include <iostream>

using namespace std;


struct Pessoa{
    string nome;
    int idade;
    float altura;
};

int main(){

    Pessoa p;  

cout << "Digite o nome da pessoa: ";
getline (cin, p.nome);

cout << "Digite a idade: ";
cin >> p.idade;

cout << "Digite a altura: ";
cin >> p.altura;



cout << "Dados da pessoa: " << endl;
cout << "Nome: " << p.nome << endl;
cout << "Idade: " << p.idade << endl;
cout << "Altura: "<< p.altura << endl;



    return 0;
}