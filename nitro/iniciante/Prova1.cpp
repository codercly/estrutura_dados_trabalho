#include<iostream>
using namespace std;


int main(){
    int n, i,j, verificaMaior = 0, c=0;
    int atual, proximo;
    cin >> n;
    int vetor[n];

    for(i = 0; i < n; i++){
        cin >> vetor[i];
    }

    for(i = 0; i < n; i++){
        if(vetor[i] < vetor[i + 1 ] /*&& vetor[i + 1] < n*/){
            c++;
            if(c > verificaMaior)
                verificaMaior = c;
        }else{
            if(c > verificaMaior)
                verificaMaior = c;
            c = 0;
        }
    }   
    cout << verificaMaior << endl;
    return 0;
}