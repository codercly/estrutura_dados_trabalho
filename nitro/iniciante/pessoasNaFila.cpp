/*
TENTEI FAZER DESSE JEITO MAS NÃO DEU CERTO:
int main(){
  int n;
  cin >> n;
  int* vetor = new int[n];

  for(int i = 0; i < n; i++){
    cin >> vetor[i];
  }
  int j = 0, m;
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
    for(int i = posiDesistente; i < n-1; i++){
      vetor[i] = vetor[i + 1];
    }
    n--;
    j++;

  }
  for(int i = 0; i < n; i++){
    cout << vetor[i] << " ";
  }
  delete[] vetor;
  return 0;

}


*/

#include<iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  int vetor[n];

  for(int i = 0; i < n; i++){
    cin >> vetor[i];
  }

  int desistentes;
  cin >> desistentes;
  while(desistentes--){
    int Desistente;
    cin >> Desistente;
    for(int i = 0; i < n; i++){
      if(vetor[i] == Desistente){
        vetor[i] = 0;
      }
    }

  }

  for(int i = 0; i < n; i++){
    if(vetor[i] != 0){
      cout << vetor[i] << " ";
    }
  }


  return 0;
}