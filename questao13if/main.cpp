#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n1, n2, n3, n4, n5, n6, n7;
    float valorcompra;

    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7;

    valorcompra = (n1*28.9) + (n2*19.9) + (n3*7.95) + (n4*2.99) + (n5*1.5) + (n6*1.85) + (n7*8.7);

    cout << fixed << setprecision (2);

    cout << valorcompra <<endl;

    if (valorcompra <=200) {

        cout << 0.05 * valorcompra << endl;
        cout << 0.95 * valorcompra << endl;
    }

    else {
        cout << 0.1 * valorcompra << endl;
        cout << 0.9 * valorcompra << endl;
    }
    return 0;
}
