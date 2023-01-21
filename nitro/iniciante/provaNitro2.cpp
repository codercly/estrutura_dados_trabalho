#include <iostream>
#include <vector>
/*Claro! O segundo if depois do while é usado para verificar se a subsequência crescente encontrada é a maior até o momento. A variável tamanho armazena o tamanho da maior subsequência crescente encontrada até o momento e a variável inicio armazena o índice onde começa a maior subsequência crescente.

Quando o while termina, a variável j armazena o índice onde termina a subsequência crescente encontrada a partir do índice i. O código j - i + 1 calcula o tamanho da subsequência crescente encontrada. Se este tamanho for maior que o tamanho da maior subsequência crescente encontrada até o momento (armazenada na variável tamanho), então atualizamos o valor de tamanho e de inicio para armazenar o tamanho e o início da nova subsequência crescente encontrada.

Espero que isso ajude a entender melhor o que está acontecendo neste código! Se você ainda tiver dúvidas, não hesite em perguntar novamente. Estou sempre disposto a ajudar! :)*/

using namespace std;

int main()
{
  int n, m = 0;
  
  cin >> n;

  vector<int> vetor(n);
  for (int i = 0; i < n; i++)
  {
    cin >> vetor[i];
  }

  // encontra a maior subsequência crescente
  int tamanho = 0;
  int inicio = 0;

  for (int i = 0; i < vetor.size(); i++)
  {
    int j = i;
    while (j + 1 < vetor.size() && vetor[j + 1] > vetor[j])
    {
      j++;
    }
    if (j - i + 1 > tamanho)
    {
      cout << j - i + 1 << endl;
      tamanho = j - i + 1;
      inicio = i;
    }
  }

  // imprime o tamanho da maior subsequência crescente
  cout << "Tamanho da maior subsequência crescente: " << tamanho << endl;

  return 0;
}

