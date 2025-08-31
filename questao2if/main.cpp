#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   double a, b, x;

   cin >> a >> b >> x;

   if (x==1) {
    cout << (a + b) /2 << endl;

   }
   else if (x==2){
    if(a>b) {
        cout << a-b << endl;
    }
    else{
        cout << b-a << endl;
    }
   }

   else if (x==3) {
    cout << a*b << endl;
   }

   else if (x==4) {
        if (b!=0){

    cout << a/b << endl;
   }
    else {
        cout << "ERRO" << endl;
    }
   }
   else {
    cout <<"ERRO";
   }
    return 0;
}
