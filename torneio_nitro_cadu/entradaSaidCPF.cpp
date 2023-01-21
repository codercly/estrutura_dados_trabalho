#include<iostream>
#include<string>
using namespace std;

int main(){
    string cpf;
    cin >> cpf;

    for(int i = 0; i < cpf.length(); i++){
        if(cpf[i] >= '0' && cpf[i] <= '9')
            cout << cpf[i];
        else
            cout << endl;
    }

    return 0;
}