#include <iostream>

using namespace std;

int main()
{
    int vet[5];
    int num;

    for(int i=0; i<5; i++){
        cin >> vet[i];

        if(num>=0){
            vet[i] = num;
        }
        else{
            i--;
        }
    }

    for(int i=0; i<5; i++){
        if(vet[i]<0{
          cout << "-1" << endl;
           }
    }





    return 0;
}
