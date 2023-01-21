#include<iostream>
using namespace std;

int main(){
    int n, j, z, diferenca, test = 1;
    int contj = 0, contz = 0;
    int i;

    cin >> n;
    while(n != 0){
        int vetor[n];
        
        contj = 0; contz = 0;

        for(i = 0; i < n; i++){
            cin >> j >> z;
            contj += j;
            contz += z;
            diferenca = contj - contz;
            vetor[i] = diferenca;
        }
    
        cout << "Teste " << test++ << endl;

        for(i = 0; i < n; i++){
            cout << vetor[i] << endl;
        }
        cout << "\n"; 
        cin >> n;
    }

    return 0;

}