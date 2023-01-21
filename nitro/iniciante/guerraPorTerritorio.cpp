#include<iostream>
using namespace std;
/*
PROBLEMA : Receber os valores dos territorios e retornar a posição em que a divisão deles sejam iguais
para resolver esse exercicio criei um vetor para armazenar os valares depois usei o laço for 
para preencher os valores e já fui somando os valores do vetor para achar o somatório total
depois utiizei outro laço for para percorrer o vetor para achar a sequencia cuja soma corresponde 
a metade do somatório total, achando assim o indice .
*/

int main(){
    int n, i, indice = 0, s = 0;
    cin >> n;
    int vetor[n];

    for(i = 0; i < n; i++){
        cin >> vetor[i];
        s = s + vetor[i];
    }
    
    int soma2 = 0;
    for(i = 0; i < n; i++){
        soma2 = soma2 + vetor[i];
        if(soma2 == s / 2){
            indice = i;
            break;
        }
    }

    cout << indice + 1;
    return 0;
}