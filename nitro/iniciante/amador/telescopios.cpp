#include<iostream>
using namespace std;


int main(){
    int a, n, f, amount = 0;
    const int fotons = 40000000;
    cin >> a >> n;

    for(int i = 0; i < n; i++){
        cin >> f;
        if(a * f >= fotons){
            amount++;
        }
    }

    cout << amount << endl;

    return 0;
}