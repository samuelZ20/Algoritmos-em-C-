#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    double dinheiro;
    cin >> dinheiro;

    ofstream saida("doces.txt");

    int chocolate = dinheiro / 13.5;
    dinheiro -= chocolate * 13.5; // subtraio o valor gasto com os chocolates

    int trufa = dinheiro / 2.5;
    dinheiro -= trufa * 2.5;

    int jujuba = dinheiro / 1.5;
    dinheiro -= jujuba * 1.5;

    int drops = dinheiro / 1.0;
    dinheiro -= drops * 1.0;

    int morango = dinheiro / 0.25;
    dinheiro -= morango * 0.25;

    // Total gasto
    saida << fixed << setprecision(2) << (chocolate * 13.5 + trufa * 2.5 +
             jujuba * 1.5 + drops * 1.0 + morango * 0.25) << endl;

    saida << chocolate << endl;
    saida << trufa << endl;
    saida << jujuba << endl;
    saida << drops << endl;
    saida << morango << endl;

    saida.close();

    return 0;
}
