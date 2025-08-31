#include <iostream>

using namespace std;

int main()
{
   int tamanho;
   cin >> tamanho;

   int linha=0;

   while (linha<tamanho){
    int coluna=0;

    while(coluna<tamanho){
        if((coluna+linha)%2==0){
            cout <<".";
        } else{
            cout << "#";
}
        coluna++;
    }

    cout << endl;
    linha++;

   }

return 0;
}
