#include <iostream>
using namespace std;

int main() {
    int n, i, verificaMaior = 0, c = 0;
    cin >> n;
    int vetor[n];

    for (i = 0; i < n; i++) {
        cin >> vetor[i];
    }

    // Mantenha o rastro dos números atual e anterior
    int atual; 
    int anterior; 

    // Analise o array e atualize o contador e o máximo
    // quando um nova sequência é encontrada
    for (i = 1; i < n; i++) {
        atual = vetor[i];
        anterior = vetor[i - 1];
        if (atual > anterior) {
            c++;
            if (c > verificaMaior)
                verificaMaior = c;
        } else {
            c = 1; // reset the counter
        }
        anterior = atual;
    }

    cout << verificaMaior << endl;
    return 0;
}