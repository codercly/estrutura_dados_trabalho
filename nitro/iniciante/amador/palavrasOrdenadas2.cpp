#include<iostream>
#include<cctype>
using namespace std;
/*
INSIGHTS DESSE DESAFIO: perdi horas em uma logica que se mostrava correta
em alguns casos porém muito complexa, deveria ter simplificado mais
eu precisava verificar se o caracter na posição i - 1 era maior que o da
posição i. fazendo isso simplifica todo o processo e o codigo fica mais clean
eu estava fazendo: if(toupper(palavra[i] < toupper(palavra[i + 1])) e isto dificulta
pois fazendo if(toupper(palavra[i - 1]) >= toupper(palavra[i])) ja resolve todas as 
verificações possiveis que devem ser feita, pois antes alem de verificar se a palavra
na posição i era menor que da posição i + 1 eu ainda tinha que fazer outra verificação
para saber se eram iguais exemplo: if(toupper(palavra[i] < toupper(palavra[i + 1]) && toupper(palavra[i]) != toupper(palavra[i + 1]))
e por algum motivo que ainda não descobri qual, não estava dando o resultado que queria.

por motivos de estudos deixo o codigo original todo cagado registrado aqui:
int main(){
    int n, c;
    bool crescente;

    string palavra;

    cin >> n;

    while(n--){
        cin >> palavra;
        crescente;
        if(palavra.size() == 1){
            cout << palavra << ": O" << endl;
            continue;
        }
        for(int i = 0; i < palavra.size() -1; i++){
            if(toupper(palavra[i]) == toupper(palavra[i + 1])){
                crescente = false;
                break;
            }
            if(toupper(palavra[i]) < toupper(palavra[i + 1])){
                crescente = true;
            }else{
                crescente = false;
            }
        }

        if(crescente == true){
            cout << palavra << ": O" << endl;
        }else{
            cout << palavra << ": N" << endl;
        }
        
    }
    

    return 0;
}

*/

int main(){
    int n, c;
    bool crescente;

    string pal;

    cin >> n;

    while(n--){
        crescente = true;
        cin >> pal;
        
        if(pal.size() == 1){
            cout << pal << ": O" << endl; 
            continue;
        }
        for(int i = 0; i < pal.size(); i++){
            if(toupper(pal[i -1]) >= toupper(pal[i])){
                crescente = false;
                break;
            }else{
                crescente = true;
            }
        }

        if(crescente == false){
            cout << pal << ": N" << endl;
        }else{
            cout << pal << ": O" << endl;
        }
    
    }
    

    return 0;
}