#include<iostream>
using namespace std;
/*
Outra forma de fazer:
#include <iostream>
using namespace std;

int main() {
    int x0, y0, x1, y1, x2, y2, x3, y3;

    // leia os dados do primeiro retangulo
    cin >> x0 >> y0 >> x1 >> y1;

    // leia os dados do segundo retangulo
    cin >> x2 >> y2 >> x3 >> y3;

    if (x1 < x2 || x3 < x0 || y1 < y2 || y3 < y0) {
        cout << 0 << endl;
    } else {
        cout << 1 << endl;
    }

    return 0;
}


*/

int main(){
    int x00, y00, x01, y01, x10, y10, x11, y11;

    cin >> x00 >> y00 >> x01 >> y01;
    cin >> x10 >> y10 >> x11 >> y11;

    /*if(x00 && y00 > x11 && y11 || x10 && y10 > x01 && y01){
        cout << 0;
    }else{
        cout << 1;
    }*/

    if(x01 <= x10 || x11 <= x00 || y01 <= y10 || y11 <= y00){
        cout << 0;
    }else{
        cout << 1;
    }

    return 0;
}