#include <iostream>

using namespace std;

int multiplicar(int a, int b){
    if(b==0){
        return 0;
    }

    return a + multiplicar(a, b-1);
}

int main(){
int num1, num2;
cin >> num1 >> num2;

cout << multiplicar(num1, num2) << endl;
    return 0;
}