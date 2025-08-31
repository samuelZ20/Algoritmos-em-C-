#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    float nota1, nota2, nota3;
    float media;

    cin >> nota1 >> nota2 >> nota3;

    media = (nota1 *2 + nota2*3 + nota3*5)/10;

    cout << fixed << setprecision(2) << media << endl;

    if (media>=8 and media <=10) {
        cout << "A";
    }


    else if (media>=7 and media<8) {
        cout << "B";
    }


    else if (media >=6 and media<7) {
        cout << "C";
    }


    else if (media>=5 and media<6) {
        cout << "D";
    }


    else if (media>=0 and media<5) {
        cout << "E";
    }


    return 0;
}
