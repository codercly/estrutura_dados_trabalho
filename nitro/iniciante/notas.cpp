#include<iostream>
#include<vector>
using namespace std;


/*como resolvi esse problema: 
ordenei o vetor para encontar as repetiçoes depois percorri o vetor ordenado contando as repetições
depois verifiquei qual era o maior numero com mais repetições
*/


void selectionSort(int vetor[], int n){
    for(int i = 0; i < n - 1; i++){
        int indiceDomenor = i;
        for(int j = i + 1; j < n; j++){
            if(vetor[j] < vetor[indiceDomenor])
                indiceDomenor = j;
        }

        if(i != indiceDomenor)
            swap(vetor[i], vetor[indiceDomenor]);
    }
}

int main(){
    int n, i;
    cin >> n;
    int vetor[n];
    for(i = 0; i < n; i++){
        cin >> vetor[i];
    }

    selectionSort(vetor, n);

    int cont;
    int maior = 0, numero = 0;

    for(i = 0; i < n; i++){
        //cont para contar os numeros repetidos
        cont = 0;

        while(i < n - 1 && vetor[i] == vetor[i + 1]){
            cont++;
            i++;
        }
        //verifica a maior contagem e o maior numero
        if(cont >= maior && vetor[i] > numero){
            maior = cont;
            numero = vetor[i];  
        }
    }
    cout << numero;
    return 0;
}