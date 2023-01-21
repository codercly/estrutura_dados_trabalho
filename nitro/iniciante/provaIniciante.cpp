#include<iostream>
using namespace std;

int main(){
    int n, maior;
    cin >> n;
    int vetor[n];

    for(int i = 0; i < n; i++){
        cin >> vetor[i];
    }
    maior = 0;
    for(int i = 0; i < n; i++){
        int cont = 1;
        while(i < n - 1 && vetor[i] < vetor[i + 1]){
            cont++;
            i++;
        }
        if(cont > maior){
            maior = cont;
        }
    }
    cout << maior;
    return 0;
}