#include<iostream>
using namespace std;

int main(){ 
    int diametroBola, altura, largura, profundidade;
    cin >> diametroBola;
    cin >> altura >> largura >> profundidade;
    if(altura >= diametroBola && largura >= diametroBola && profundidade >= diametroBola){
        cout << "S";
    }else{
        cout << "N";
    }


    return 0;
}