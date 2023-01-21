#include<iostream>
#include<algorithm>
#include <cmath>
using namespace std;

int main(){
    long long int i, c, n, indice, maior;
    double d;
    cin >> n;
    int vetor[n];

    for(i = 0; i < n; i++){
        cin >> d >> c;
        vetor[i] = log(d) * c;
    }
    indice = -1;
    maior = *max_element(vetor, vetor + n);
    for(i = 0; i < n; i++){
        if(vetor[i] == maior){
            indice = i;
            break;
        }
    }
    cout << indice << endl;
    return 0;
}