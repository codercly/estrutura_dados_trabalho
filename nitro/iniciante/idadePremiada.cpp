#include<iostream>
using namespace std;

int main(){
    int n, x, i, poltrona;
    bool t;
    cin >> n;
    int vetor[n];

    for(i = 0; i < n; i++){
        cin >> vetor[i];
    }

    cin >> x;

    for(i = 0; i < n; i++){
        if(vetor[i] == x){ poltrona = i; t = true; break;}
        else{t = false;}
    }

   
    if(t == true){
        cout << "Número da poltrona do vencedor: " << poltrona << endl;
    }else{
        cout << "Não há vencedor";
    }

    return 0;
}