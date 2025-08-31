#include <iostream>

using namespace std;

int main()
{
    float v1, v2, d, vrel, tempo;

    cin >> v1 >> v2 >> d;

    vrel= (v1+v2);
    tempo = d/ vrel;

    if (tempo<=10){
        cout << "COLISAO";
    }

    else {
        cout << tempo;
    }

    return 0;
}
