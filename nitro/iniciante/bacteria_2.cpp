#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

struct Bacteria {
  int num_geradas;  // número de bactérias geradas por cada divisão
  int dias_crescimento;  // número de dias de crescimento da colônia
  double log_total_bacterias;  // logaritmo da quantidade total de bactérias geradas ao final do período de crescimento
};

int main() {
  int n;
  cin >> n;

  // cria um vetor para armazenar as informações sobre cada tipo de bactéria
  Bacteria bacterias[n];

  // lê as informações sobre cada tipo de bactéria
  for (int i = 0; i < n; i++) {
    cin >> bacterias[i].num_geradas >> bacterias[i].dias_crescimento;
  }

  // para cada tipo de bactéria, calcula o logaritmo da quantidade total de bactérias geradas
  // ao final do período de crescimento
  for (int i = 0; i < n; i++) {
    double log_num_geradas = log(bacterias[i].num_geradas);
    bacterias[i].log_total_bacterias = log_num_geradas * bacterias[i].dias_crescimento;
  }

  // encontra o tipo de bactéria que gerou a maior quantidade de bactérias
  int indice_maior = 0;
  for (int i = 1; i < n; i++) {
    if (bacterias[i].log_total_bacterias > bacterias[indice_maior].log_total_bacterias) {
      indice_maior = i;
    }
  }

  cout << indice_maior << endl;

  return 0;
}
