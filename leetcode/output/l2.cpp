#include <iostream>
using namespace std;

int main(){

string palavra1, palavra2;

cin >> palavra1 >> palavra2;

int i=0;
string palavra3;

while(palavra1[i]!='\0' and palavra2[i]!='\0'){
    if(palavra1[i]==palavra2[i]){
        palavra3=palavra3+palavra1[i];
        i++;
    }

    else{
        break;
    }
}

cout << palavra3;












    return 0;
}