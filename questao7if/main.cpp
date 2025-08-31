#include <iostream>

using namespace std;

int main()
{
   int codigo;
   float peso, pgrama;
   int pais;

   cin >> codigo >> peso >> pais;

   pgrama = peso * 1000;

   cout << pgrama << endl;

    if (pais == 1){

            if(codigo<=4 and codigo>=1){
                cout << 10*pgrama << endl;
                cout << 0<< endl;
                cout << 10 * pgrama << endl;
            }

            else if (codigo>=5 and codigo<=7){
                cout << 25*pgrama << endl;
                cout << 0 << endl;
                cout << 25 * pgrama << endl;
            }

            else {
              cout << 35 * pgrama << endl;
              cout << 0 << endl;
              cout << 35 * pgrama << endl;
            }
}

   if (pais == 2) {
        if(codigo<=4 and codigo>=1){
            cout << 10*pgrama << endl;
            cout << 0.15 * (10*pgrama) << endl;
            cout << 10*pgrama + 0.15 * (10*pgrama) << endl;
        }

       else if(codigo>=5 and codigo<=7){
            cout << 25*pgrama << endl;
            cout << 0.15 * (25*pgrama) << endl;
            cout << 25*pgrama + 0.15 * (25*pgrama) << endl;
        }

        else {
            cout << 35*pgrama << endl;
            cout << 0.15 * (35*pgrama) << endl;
            cout << 35*pgrama + 0.15 * (35*pgrama)<< endl;
   }
   }


   if (pais==3) {
        if(codigo<=4 and codigo>=1){
            cout << 10*pgrama << endl;
            cout << 0.25 * (10*pgrama) << endl;
            cout << 10 * pgrama + 0.25 * (10*pgrama)<< endl;
        }

        else if (codigo>=5 and codigo<=7){
            cout << 25*pgrama << endl;
            cout << 0.25 * (25*pgrama) << endl;
            cout << 25*pgrama + 0.25 * (25*pgrama)<< endl;
        }

        else {
            cout << 35*pgrama << endl;
            cout << 0.25 * (35*pgrama) << endl;
            cout << 35*pgrama + 0.25 * (35*pgrama)<< endl;
        }

   }


    return 0;
}
