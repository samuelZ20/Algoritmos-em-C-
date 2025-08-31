#include <iostream>
#include <fstream>

using namespace std;

int main()
{
   string arquivo , palavra, nova;

   cin >> arquivo >> palavra;
    cout << "palavra" << palavra << "\n";
   ofstream entrada(arquivo);
   entrada << palavra << endl;

   entrada.close();

   ifstream saida(arquivo);
   saida >> nova;

    cout << "está vindo do arquivo" << nova << "\n";
    return 0;
}
