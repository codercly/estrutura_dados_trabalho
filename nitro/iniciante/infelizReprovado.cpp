#include<iostream>
#include<string>
using namespace std;
/*NÃO ENTENDI O ENUNCIADO DO EXERCÍCIO. SÓ COPIE*/

int main(){
    int n, nota, menorNota, instance = 1;
    string nome, menorNome;
    
    while(cin >> n){
        menorNota = 11;
        while (n--){
            cin >> nome >> nota;
            if(nota < menorNota){
                menorNota = nota;
                menorNome = nome;
            } else if (nota == menorNota && nome > menorNome){
                menorNome = nome;

            }
        }
        cout << "Instancia " << instance << endl;
        cout << menorNome << endl;
    }

    return 0;
}