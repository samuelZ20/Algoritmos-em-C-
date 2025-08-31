#include <iostream>

using namespace std;

int main()
{
    string cor1, cor2;
    int n, unidade, dezena, centena, umilhar, dmilhar, cmilhar;

    cin>> cor1 >> cor2 >> n;
    unidade = n%10;
    dezena = (n/10)%10;
    centena = (n/100)%10;
    umilhar = (n/1000)%10;
    dmilhar = (n/10000)%10;
    cmilhar = (n/100000)%10;

    if (unidade==cmilhar and dezena==dmilhar and centena==umilhar){
            cout << cor1;

    }

    else {
            cout << cor2;

    }

    return 0;
}
