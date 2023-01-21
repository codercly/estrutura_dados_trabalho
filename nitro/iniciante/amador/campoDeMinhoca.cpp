#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int matriz[n][m];
    int somal[n], somaC[m], somaLC = 0, maiorL, maiorC, soma;
    //lendo valores
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matriz[i][j];
            somaLC += matriz[i][j];
        }
    }
    // somando linhas
    for(int i = 0; i < n; i++){
        soma = 0;
        for(int j = 0; j < m; j++){
            soma += matriz[i][j];
        }
        somal[i] = soma;
    }
    //somando colunas
    for(int j = 0; j < m; j++){
        soma = 0;
        for(int i = 0; i < n; i++){
            soma += matriz[i][j];
        }
        somaC[j] = soma;
    }
    //printando a matriz
    /*for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            //cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }*/

    maiorL = 0, maiorC = 0;

    for(int i = 0; i < n; i++){
        //cout << somal[i] << " ";
        if(somal[i] > maiorL){
            maiorL = somal[i];
        }
    }
    for(int j = 0; j < m; j++){
        if(somaC[j] > maiorC){
            maiorC = somaC[j];
        }
        //cout << somaC[j] << " ";
    }

    if(maiorL > maiorC){
        cout << maiorL;
    }else{
        cout << maiorC;
    }

    /*cout << somal << endl;
    cout << somaC << endl;
    cout << somaLC << endl;*/
    

    return 0;
}
