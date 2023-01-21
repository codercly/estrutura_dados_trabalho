#include<iostream>
using namespace std;

int main(){
    int a, b, n, test = 1;
    int contAldo, contBeto;
    string ganhou;
    cin >> n;

    while(n != 0){
        contAldo = 0;
        contBeto = 0;
        for(int i = 0; i < n; i++){
            cin >> a >> b;
            contAldo += a;
            contBeto += b;
        }
        if(contAldo > contBeto)
            ganhou = "Aldo";
        else if(contBeto > contAldo)
            ganhou = "Beto";
        cout << "Teste " << test++ << endl;
        cout << ganhou << "\n\n";

        cin >> n;

    }




    return 0;
}