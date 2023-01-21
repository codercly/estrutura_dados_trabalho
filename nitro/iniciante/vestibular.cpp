#include<iostream>
#include<string>
using namespace std;
//usar um unico {for} para percorrer as duas strings comparando se as posições de cada elemento são iguais.
int main(){
    
    int i, n, cont = 0;

    cin >> n;
    string a, b;
    cin >> a;
    cin >> b;
    for(i = 0; i < n; i++){
        if(a[i] == b[i])
            cont++;
    }
    cout << cont;
    return 0;
}