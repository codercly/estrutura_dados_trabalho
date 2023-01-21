#include<iostream>
using namespace std;
/*
Para saber se uma coordenada está fora de uma quadra de tênis, é preciso comparar a coordenada com as medidas da quadra e com a sua posição no plano cartesiano.
Imagine que a quadra de tênis tem as medidas de 432 polegadas de comprimento por 936 polegadas de largura e está posicionada no ponto (0,0) do plano cartesiano. 
Nesse caso, para determinar se uma coordenada está fora da quadra, basta verificar se ela está fora do retângulo formado pela quadra. Ou seja, 
basta verificar se a coordenada x (que indica a posição horizontal do ponto no plano cartesiano) está entre 0 e 432 (inclusive) e se a coordenada y (que indica a posição vertical do ponto no plano cartesiano) está entre 0 e 936 (inclusive). 
Se uma dessas condições não for satisfeita, significa que a coordenada está fora da quadra.

RESUMINDO: x tem que estar entre 0 e 432 e y entre 0 468.
*/
int main(){
    int x, y;

    cin >> x >> y;

    if(x >= 0 && x <= 432 && y >= 0 && y <= 468){
        cout << "dentro"; 
    }else{
        cout << "fora";
    }

    return 0;
}