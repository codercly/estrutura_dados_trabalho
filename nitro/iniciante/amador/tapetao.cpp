#include<iostream>
using namespace std;
/*como resolver esse desafio:
determinar o maior valor possivel para um unico tapete. Para isso,
deve fazer a largura do tubo, menos o numero de total de tapetes menos 1,
que é o maior tapete. Dessa forma temos (l - (n - 1)). Depois devemos 
elevar ao quadrado para achar a maior area do maior tapete e somar com a 
area dos outros tapetes.
(l - (n - 1)) - acha o comprimento do maior tapete
(l - (n - 1)) * (l - (n - 1)) - acha a area do maior tapete 
(n - 1) - acha a area dos menores tapetes
(l - (n - 1)) * (l - (n - 1)) + (n - 1) - formula final. 

*/


int main(){
    int l, n;
    int maiorArea;

    cin >> l >> n;
    maiorArea = (l - (n - 1)) * (l - (n - 1)) + (n - 1);

    //cout << (l - (n - 1)) << endl;

    //cout << (l - (n - 1)) + (n - 1) << endl;

    //cout << 6 * 6 + 4 << endl;

    cout << maiorArea << endl;

    return 0;
}