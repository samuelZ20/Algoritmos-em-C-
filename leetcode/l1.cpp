#include <iostream>
using namespace std;

int main(){

    string mesclada;
    string palavra1, palavra2;
    cin >> palavra1 >> palavra2;

    int i=0;
    while(palavra1[i]!='\0' or palavra2[i]!='\0'){
        if(palavra1[i]!='\0'){
            mesclada= mesclada+palavra1[i];
        }

        if(palavra2[i]!='\0'){
            mesclada= mesclada+palavra2[i];
        }

        i++;
    }

        cout << mesclada << endl;

    












    return 0;
}