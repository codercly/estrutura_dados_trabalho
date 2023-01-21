#include<iostream>
using namespace std;

int main(){
    int x, y, xm, ym, xr, yr;

    cin >> xm >> ym >> xr >> yr;

    x = xm + ym;
    y = xr + yr;

    cout << y - x;

    return 0;
}