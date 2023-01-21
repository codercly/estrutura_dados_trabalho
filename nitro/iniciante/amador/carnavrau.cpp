#include<iostream>
#include<iomanip>
/*
como resolvi: no primeiro FOR eu fui somando os elementos assim que eu lia, no segundo FOR encontrei o menor e o maior elemento
depois somei eles e subtrai da soma total dos elementos, achando assim a soma dos elemtos centrais excluindo a menor e a maior nota!
*/
using namespace std;

int main(){
    float notas[5], soma = 0;
    float maior, menor, somaMiorMenor = 0;
    
    soma = 0;

    for(int i = 0; i < 5; i++){
        cin >> notas[i];
        soma += notas[i];
    }
    maior = notas[0];
    menor = notas[0];

    for(int i = 0; i < 5; i++){
        if(notas[i] > maior) maior = notas[i];
        
        if(notas[i] < menor) menor = notas[i];
    }

    somaMiorMenor = maior + menor;


    cout << setprecision(1) << fixed;
    //cout << maior << " " << menor << endl;
   // cout << somaMiorMenor << endl;
    cout << soma - somaMiorMenor;
    return 0;
}