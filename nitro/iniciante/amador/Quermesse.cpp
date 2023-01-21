#include<iostream>
using namespace std;

int main(){
    int n, person, test = 1;

    cin >> n;
    while(n != 0){
        int vetor[n];

        for(int i = 0; i < n; i++){
            cin >> vetor[i];
            if(vetor[i] == i + 1){
                person = i + 1;
            }
        }

        cout << "Teste " << test++ << endl;
        cout << person << "\n\n";
        cin >> n;
    }


    return 0;
}