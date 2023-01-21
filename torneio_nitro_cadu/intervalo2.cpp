#include<iostream>
using namespace std;

int main(){
    
    int c = 0, n, cont = 0;
    cin >> n;
    int vetor[n];

    for(int i = 0; i < n; i++){
        cin >> vetor[i];
        if(vetor[i] >= 10 && vetor[i] <= 20){cont++;}else{c++;}
        
    }

    cout << cont <<" "<< "in" << endl;
    cout << c << " "<< "out" << endl;

    return 0; 
}