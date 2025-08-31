#include <iostream>

using namespace std;

int main()
{
    float peso, altura;

    cin >> peso >> altura;

    if (altura<1.20) {
        if (peso<60)
        cout << "A";

        else if (peso<=90 and peso>=60)
        cout << "D";

        else
            cout << "G";

    }

    else if (altura>=1.20 and altura<=1.70) {
        if (peso<60)
            cout << "B";

        else if(peso>=60 and peso<=90)
            cout << "E";

        else
            cout << "H";
    }

    else  {
        if (peso<60)
            cout << "C";

        else if (peso>=60 and peso<=90)
            cout << "F";

        else
            cout << "I";
    }

    return 0;
}
