#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n, m, d, norteSul = 0, lesteOeste = 0;
    char c;
    bool afastou = false;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> c >> d;
        if(c == 'N'){
            norteSul += d;
        }
        if(c == 'S'){
            norteSul -= d;
        }
        if(c == 'L'){
            lesteOeste += d;
        }
        if(c == 'O'){
            lesteOeste -= d;
        }
        if(sqrt((norteSul * norteSul) + (lesteOeste * lesteOeste)) > m){
            afastou = true;
        }
    }
    if(afastou){
        cout << 1;
    }else {
        cout << 0;
    }
    return 0;
}