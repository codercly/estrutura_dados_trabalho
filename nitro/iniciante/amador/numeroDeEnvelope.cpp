#include<iostream>
using namespace std;
/* 
    logica do exercio

    - Ler a entrada de N e K, que representam respectivamente a quantidade de rótulos de balas que Aldo possui 
      e o número de tipos diferentes de bala que a SBC produz.

    - Criar uma estrutura de dados para armazenar as contagens de cada tipo de bala (um array, um mapa ou unordered_map). 
      Inicializar todas as contagens como 0.

    - Ler cada rótulo de bala da entrada e aumentar o contador correspondente na estrutura de dados criada.

    - Percorrer a estrutura de dados e calcular o número máximo de envelopes.

*/

int main(){
    int qtnRotulos, tipos, rotulo, indiceMenor = 0;

    cin >> qtnRotulos >> tipos;

    int contador[tipos];

    for(int i = 0; i < tipos; i++){
        contador[i] = 0;
    }

    for(int i = 0; i < qtnRotulos; i++){
        cin >> rotulo;
        contador[rotulo - 1]++;
    }

    for(int i = 0; i < tipos; i++){
        if(contador[indiceMenor] > contador[i]){
            indiceMenor = i;
        }
    }

    cout << contador[indiceMenor] << endl;
    

    return 0;
}

/* outras formas de resolver esse algoritmo: os outputs não stão corretos

utilizando um map mapa para armazenar a contagem de cada tipo de bala. 
Um mapa é uma estrutura de dados que mapeia chaves a valores

#include <iostream>
#include <map>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    map<int, int> labels;
    for (int i = 0; i < k; i++) {
        labels[i+1] = 0;
    }

    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        labels[x]++;
    }

    int maxEnvelopes = 0;
    for (int i = 1; i <= k; i++) {
        maxEnvelopes += labels[i] / k;
    }

    cout << maxEnvelopes << endl;

    return 0;
}
utilizando uma unordered_map
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    unordered_map<int, int> labels;
    for (int i = 1; i <= k; i++) {
        labels[i] = 0;
    }

    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        labels[x]++;
    }

    int maxEnvelopes = 0;
    for (int i = 1; i <= k; i++) {
        maxEnvelopes += labels[i] / k;
    }

    cout << maxEnvelopes << endl;

    return 0;
}


*/