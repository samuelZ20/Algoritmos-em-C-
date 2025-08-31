#include <iostream>

using namespace std;

int main()
{
    int a, b, c, x;

    cin >> a >> b >> c >> x;

    if (x<=a){
        cout << x << " " << a << " " << b << " " << c;

    }

    else if (x <= b) {
        cout << a << " " << x << " " << b << " " << c;
    }

    else if (x<=c) {
        cout << a << " " << b << " " << x << " " << c;
    }

    else {
        cout << a << " "<< b << " " << c << " " << x;
    }


    return 0;
}
