#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
/* 
tentei usar minha propria implementação para resolver esse problema sem usar biblioteca pronta
de ordenação, mas passa em todos os casos de testes e no ultimo da core daump. acabei usando
então biblioetca pronta de ordenação.

*/
/*
void insertionSort(vector<string>& vetor_strings){

for (int i = 1; i < vetor_strings.size(); i++) {
    string key = vetor_strings[i];
    int j = i - 1;

    while (j >= 0 && vetor_strings[j] > key) {
        vetor_strings[j + 1] = vetor_strings[j];
        j = j - 1;
    }
    vetor_strings[j + 1] = key;
}

}

int main(){
    int n, k, indice = 0;

    cin >> n >> k;

    vector<string> nomes(n);
    

    for(int i = 0; i < n; i++){
        cin >> nomes[i];
    }

    insertionSort(nomes);
    indice = k-1;
    //cout << endl;
    cout << nomes[indice] << endl;
    //cout << endl;*/

    /*for(int i = 0; i < n; i++){
        cout << nomes[i] << endl;
    }*/
    
int main() {
    int n, k;

    cin >> n >> k;
    string nomes[n];

    for(int i = 0; i < n; i++){
        cin >> nomes[i];
    }

    sort(nomes, nomes + n);

    cout << nomes[k - 1] << endl;

    return 0;
}