#include<iostream>
using namespace std;

int main(){
    float a, g, ra, rg, alcool, gasolina;
    cin >> a >> g >> ra >> rg;

    if(a < g)
        cout << "A";
    if(a == g)
        cout << "G";
    if(g < a)
        cout << "G";
    return 0;
}