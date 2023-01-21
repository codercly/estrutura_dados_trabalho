#include<iostream>
using namespace std;

int main() {
  int i, n,d,c, maior, indice;
  cin>>n;
  int vetor[n];
  for(i = 0; i < n; i++){
    cin>>d>>c;
    vetor[i] = d * c;

  }
  maior = vetor[0];
  for(i = 0; i < n -1; i++){
    if(vetor[i] > maior)
      maior = vetor[i];
      indice = i;
  }
  cout<<indice<<":"<<maior;
  return 0;
}