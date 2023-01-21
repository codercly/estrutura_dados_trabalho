#include<iostream>
#include<string>
using namespace std;

int main(){
    string palavra;
    cin >> palavra;
    int cont = 0;
    for(int i = 0; i < palavra.size(); i++){
        cont++;
    }

    if(cont >= 10)
        cout << "palavrao" << endl;
    else
        cout << "palavrinha" << endl;
    return 0;
}