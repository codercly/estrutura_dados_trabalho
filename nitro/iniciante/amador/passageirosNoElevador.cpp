#include<iostream>
using namespace std;

int main(){
    int n, c, saida, entrada, elevador, s = 0, e = 0;
    bool excedeu = false;

    cin >> n >> c;

    for(int i = 0; i < n; i++){
        cin >> saida >> entrada;
        s += saida;
        e += entrada;
        if(s > e){
            elevador = s - e;
        }
        if(e > s){
            elevador = e - s;
        }
        if(elevador > c)
            excedeu = true;
    }
    //cout << elevador;
    if(excedeu){
        cout << "S";
    }else{
        cout << "N";
    }

    return 0;
}