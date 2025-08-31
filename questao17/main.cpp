#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    float salario, gratificacao, percentual, sfinal, vdesc, liq;

    cin >> salario >> gratificacao >> percentual;

    ofstream saida ("holerite.txt");

    sfinal = salario + gratificacao;
    vdesc = (percentual/100) * sfinal;
    liq = sfinal - vdesc;

    saida << fixed << setprecision (2) << sfinal << endl;
    saida << fixed << setprecision (2) << vdesc << endl;
    saida << fixed << setprecision (2) << liq << endl;

    saida.close();

    return 0;
}
