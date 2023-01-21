#include<iostream>
#include<string>
using namespace std;

struct Pessoa{
  string nome;
  int idade;
};

int main(){
  int tamanhoFila = 10;

  Pessoa fila[tamanhoFila];

  int posiatual = -1; // posição da ultima pessoa na fila

  char comando;

  while(cin >> comando && comando != 'p'){

    if(comando == '+'){

      Pessoa pessoa;
      cin >> pessoa.nome >> pessoa.idade;
      cout << pessoa.nome << " entrou na fila" << endl;
      // se ainda tem espaço na fila
      if(posiatual + 1 <= tamanhoFila){
        cout<< "fila esta cheia" << endl;
      }else{
        fila[++posiatual] = pessoa; // insere a pessoa
      }

    }else if(comando == '-'){// remover, buscar pessoa pelo nome
      string desistente;
      cin >> desistente;
      int posiDoDesistente = -1;
      for(int i = 0; i < posiatual; i++){
        if(fila[i].nome == desistente){
          posiDoDesistente = i;
          break;
        }
      }

      if(posiDoDesistente == -1 ){
        cout<<"pessoa não esta na fila ou a fila esta vazia" << endl;
        continue;
      }

      for(int i = posiDoDesistente; i < posiatual; i++){
        fila[i] = fila[i + 1];
      }
      cout << desistente << "saiu da fila" << endl;
      posiatual--;


    }else if(comando == 'a'){ // atender
      if(posiatual == -1){
        cout << "fila vazia";
        continue;
      }

      Pessoa prosimoDaFila = fila[0];
      cout << "atendendo" << prosimoDaFila.nome << endl;
      // todo mundo da um passo para frente
      for(int i = 0; i < posiatual; i++){
          fila[i] = fila[i + 1];
      }
      // atualiza a posição da ultima pessoa da fila
      posiatual--;

    }else{
      cout << "comando inválido";
    }

  }

  return 0;
}