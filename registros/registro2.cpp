#include <iostream>

using namespace std;

struct Data{
    int dia, mes, ano;
};


bool dataMaisAntiga(Data d1, Data d2){
    if(d1.ano < d2.ano) return true;
    if(d1.ano > d2.ano) return false;


    if(d1.mes<d2.mes) return true;
    if(d1.mes<d2.mes) return false;

    return d1.dia<d2.dia;
}


int main(){
    Data d1, d2;

    cout << "Digite a primeira data(dia mes ano): ";
    cin >> d1.dia >> d1.mes >> d1.ano;

    cout << "Digite a segunda data(dia mes ano): ";
    cin >> d2.dia >> d2.mes >> d2.ano;



    if(dataMaisAntiga(d1,d2)){
        cout << "A primeira data eh mais antiga" << endl;
    }

    else{
        cout << "A segunda data eh mais antiga" << endl;
    }




    return 0;
}