#include<iostream>
#include<vector>
using namespace std;

int main() {
    // Lê o tamanho do vetor
    int n;
    std::cin >> n;

    // Cria o vetor com tamanho n
    int* vetor = new int[n];

    // Lê os elementos do vetor
    for (int i = 0; i < n; i++) {
        std::cin >> vetor[i];
    }

    // Lê o número de elementos a serem removidos
    int m;
    std::cin >> m;

    // Remove os elementos "desistentes" do vetor
    int j = 0;
    while (j < m) {
        int desistente;
        std::cin >> desistente;

        // Procura o índice da primeira ocorrência de desistente
        int posiDesistente = -1;
        for (int i = 0; i < n; i++) {
            if (vetor[i] == desistente) {
                posiDesistente = i;
                break;
            }
        }

        // Remove o elemento desistente do vetor
        for (int i = posiDesistente; i < n - 1; i++) {
            vetor[i] = vetor[i + 1];
        }
        n--;
        j++;
    }

    // Imprime o vetor resultante
    for (int i = 0; i < n; i++) {
        std::cout << vetor[i] << " ";
    }

    // Libera a memória alocada para o vetor
    delete[] vetor;
    return 0;
}
    /*int n;
    cin >> n;
    vector<int> vetor(n);
    for(int i = 0; i < n; i++){
        cin >> vetor[i];
    }

    int m, j = 0;
    int posiAtual = -1;
    cin >> m;
    while(j < m){
        int desistente;
        int posiDesistente = -1;
        cin >> desistente;
        
        for(int i = 0; i < n; i++){
            if(vetor[i] == desistente){
                posiDesistente = i;
                break;
            }
        }
        for(int i = posiDesistente; i < n; i++){
            vetor[i] = vetor[i + 1];
        }
        n = n -1;
        j++;
    }

    for(int i = 0; i < n; i++){
        cout << vetor[i] << " ";
    }
     
    return 0;
}*/