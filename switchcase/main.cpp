#include <iostream>

using namespace std;

int main()
{

    int num;
    cout << " Qual e o mes: ";
    cin >> num;

    switch (num)
    {
        case 1:
        cout << "31 dias";
        break;

        case 2:
        cout << "28 dias";
        break;

        case 3:
        cout << "31 dias";
        break;

        case 4:
        cout << "30 dias";
        break;

        case 5:
        cout << "31 dias";
        break;

        case 6:
        cout << "30 dias";
        break;

        case 7:
        cout << "31 dias";
        break;

        case 8:
        cout << "30 dias";
        break;

        case 9:
        cout << "31 dias";
        break;

        case 10:
        cout << "30 dias";
        break;

        case 11:
        cout << "31 dias";
        break;

        case 12:
        cout << "30 dias";
        break;

        default:
            cout << "Numero invalido";

        return 0;

    }


    return 0;
}
