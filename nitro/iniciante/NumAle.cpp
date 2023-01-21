#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

bool Existe(int valores[],int tam, int valor){
    for(int i = 0;i<tam;i++){
        if(valores[i]==valor)
            return true;
    }
    return false;
}

void GeraAleatorios(int numeros[],int quantNumeros,int Limite){
    srand(time(NULL));

    int v;
    for(int i=0;i<quantNumeros;i++){
        v = rand() % Limite;
        while(Existe(numeros,i,v)){
            v = rand() % Limite;
        }
        numeros[i] = v;
    }

}

int main(){
    ofstream myfile("test.txt");
    int numeros[1001];
    GeraAleatorios(numeros,1001,1001);
    for(int i = 0;i<1001;i++){
        myfile<<numeros[i]<<endl;
    }

    return 0;
}