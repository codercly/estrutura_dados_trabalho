#include <iostream>
#include <string>

using namespace std;

struct Pessoa {
  string nome;
  int idade;
};

int main () {
  int tamanhoDaFila = 10;

  Pessoa fila[tamanhoDaFila];
  int posicaoAtual = -1; // posicao da ultima pessoa da fila
  char comando;

  while (cin >> comando && comando != 'p') {
    if (comando == '+') { // inserir
      Pessoa pessoa;
      cin >> pessoa.nome >> pessoa.idade;
      cout << pessoa.nome << " entrou na fila" << endl;

      // se ainda tem espaço na fila
      if (posicaoAtual + 1 >= tamanhoDaFila) {
        cout << "a fila está cheia";
      } else {
        fila[++posicaoAtual] = pessoa; // insere a pessoa
      }
    } else if (comando == '-') { // remover a pessoa
      string desistente;
      // busca a pessoa pelo nome
      cin >> desistente;
      int posicaoDoDesistente = -1;

      for (int i=0; i < posicaoAtual; i++) {
        if (fila[i].nome == desistente) {
          posicaoDoDesistente = i;
          break;
        }
      }

      if (posicaoDoDesistente == -1) {
        cout << "a pessoa não está na fila ou a fila está vazia" << endl;
        continue;
      }
      // todo mundo dá um passo a frente
      for (int i=posicaoDoDesistente; i < posicaoAtual; i++) {
        fila[i] = fila[i+1];
      }

      // atualiza a posica da ultima pessoa na fila
      posicaoAtual = posicaoAtual - 1;
      cout << desistente << " saiu da fila" << endl;
    } else if (comando == 'a') {   // atender
      if (posicaoAtual == -1) {
        cout << "A fila está vazia!" << endl;
        continue; // jump
      } 

      Pessoa proximoDaFila = fila[0];
      cout << "atendendo " << proximoDaFila.nome << endl;

      // todo mundo dá um passo a frente
      for (int i=0; i < posicaoAtual; i++) {
        fila[i] = fila[i+1];
      }

      // atualiza a posica da ultima pessoa na fila
      posicaoAtual = posicaoAtual - 1;
    } else {
      cout << "comando invalido!";
    }
  };
}