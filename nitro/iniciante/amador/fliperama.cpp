#include<iostream>
using namespace std;
//usei o bobosort, mas só troquei o sinal dentro do if de '<' para '>'.
void bubblesort(int numeros[], int a){
  bool trocou = false;

    
  do{
    trocou = false;
    for(int i = 0; i < a-1; i++){
      int primeiro = numeros[i];
      int segundo = numeros[i+1];

      if(segundo > primeiro){
        numeros[i] = segundo;
        numeros[i+1] = primeiro;

        trocou = true;
      }
    }
  }while(trocou);
}

int main(){
    int n, m;
    cin >> n >> m;
    int num[n];

    for(int i = 0; i < n; i++){
        cin >> num[i];
    }   
    bubblesort(num, n);

    for(int i = 0; i < m; i++){
        cout << num[i] << endl;
    }
    return 0;
}