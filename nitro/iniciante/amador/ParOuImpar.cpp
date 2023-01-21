#include<iostream>
using namespace std;

int main(){
    int n, a, b, test = 1, soma = 0;
    string player1, player2;

    cin >> n;

    while (n != 0){
        cin >> player1;
        cin >> player2;
        int resultado[n];
        for(int i = 0; i < n; i++){
            cin >> a >> b;
            soma = (a + b) % 2;
            resultado[i] = soma;
        }
        
        //cout << soma << endl;
        cout << "Teste " << test++ << endl;
        for(int i = 0; i < n; i++){
            if(resultado[i] == 0){
                cout << player1 << endl;
            }else{
                cout << player2 << endl;
            }
        }
        cin >> n;
    }
    

    return 0;
}