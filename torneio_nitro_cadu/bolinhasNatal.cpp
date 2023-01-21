#include<iostream>
using namespace std;

int main(){
    int b, g;
    cin >> b >> g;
    int quantB;
    quantB = (g/2) - b;
    
    if(quantB > 0)
        cout << "Faltam " << quantB <<" bolinha(s)"<< endl;
    else
        cout << "Amelia tem todas bolinhas!" << endl;
    return 0;
}