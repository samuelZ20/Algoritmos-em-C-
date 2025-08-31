#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    string nomearquivo, palavra;
    cin >> nomearquivo >> palavra;

    ofstream saida (nomearquivo);
    saida << palavra;

    saida.close();

    return 0;
}
