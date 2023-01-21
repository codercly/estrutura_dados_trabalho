#include<iostream>
#include<string>
using namespace std;

int main(){
    int n , total = 0;
    string placas;
    cin >> n;
    cin >> placas;
    for(int i = 0; i < placas.length(); i++){
        if(placas[i] == 'A'){
            total = total + 1;
        }
        if(placas[i] == 'C' || placas[i] == 'P'){
            total = total + 2;
        }
    }
    
    cout << total;
    return 0;
}