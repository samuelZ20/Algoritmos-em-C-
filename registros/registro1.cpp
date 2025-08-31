#include <iostream>

using namespace std;

struct Ponto {
    int x, y;
};

struct Retangulo {
    Ponto v1;
    Ponto v2;
};

bool pontoDentro (Ponto p, Retangulo r){
    return (p.x >= r.v1.x and p.x <=r.v2.x and p.y>=r.v1.y and p.y <=r.v2.y);}
}

int main(){
    Ponto p;
    int n;

    cin >> p.x >> p.y;

    cin >> n;

    int cont=0;

    for(int i=0; i<n; i++){
        Retangulo r;
        cin >> r.v1.x >> r.v1.y >> r.v2.x >> r.v2.y;

        if(pontoDentro(p,r)){
            cont++;
        }
    }

    return 0;
}