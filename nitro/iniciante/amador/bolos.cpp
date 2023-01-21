#include<iostream>
using namespace std;
/*resolução: para fazer um bolo é necessário pelo menos  2 xícaras de farinha de trigo, 3 ovos e 5 colheres de sopa de leite.
ler a quantidade de cada item e dividir pela quantidade minima que cada item tem que ter e depois verifica qual o menor valor 
entre eles.
*/
int mdc(int a, int b){
    return (b == 0 ? a : mdc(b, a % b));
}


int main(){
    int a, b, c, qa, qb, qc;

    cin >> a >> b >> c;

    qa = a / 2; qb = b / 3; qc = c / 5;
    if(qa <= qb && qa <= qc){
        cout << qa;
    }else if(qb <= qa && qb <= qc){
        cout << qb;
    }else{
        cout << qc;
    }
      
    //cout << mdc(mdc(a, b), c);
  
    return 0;
}