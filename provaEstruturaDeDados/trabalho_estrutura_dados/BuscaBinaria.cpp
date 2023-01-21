#include <iostream>
#include <bits/stdc++.h>
#include <sys/time.h>
using namespace std;

// merg sort
void combine(int a[], int s, int m, int e)
{
  int *buffer = new int[e + 1]; // for the total size of the merged array

  int k = s;
  while (k <= e)
  {
    buffer[k] = a[k];
    k = k + 1;
  }

  int i = s;
  int j = m + 1;
  k = s;

  while (i <= m && j <= e)
  {
    if (buffer[i] <= buffer[j])
    {
      a[k] = buffer[i];
      i = i + 1;
    }
    else
    {
      a[k] = buffer[j];
      j = j + 1;
    }
    k = k + 1;
  }

  while (i <= m)
  {
    a[k] = buffer[i];
    i = i + 1;
    k = k + 1;
  }

  while (j <= e)
  {
    a[k] = buffer[j];
    j = j + 1;
    k = k + 1;
  }

  delete[] buffer;
}
// auxiliary function (helper function)
void mrgSort(int a[], int s, int e)
{
  if (s >= e)
  {
    return;
  }

  int m = (s + e) / 2;
  mrgSort(a, s, m);
  mrgSort(a, m + 1, e);
  combine(a, s, m, e);
}

void mrgSort(int a[], int n) // wrapper function
{
  mrgSort(a, 0, n - 1);
}

void display(int a[], int n)
{
  int i = 0;
  while (i < n)
  {
    cout << a[i] << ", ";
    i++;
  }
  cout << endl;
}

// merge sort

// gerando numeros aleatorios
bool Existe(int valores[], int tam, int valor)
{
  for (int i = 0; i < tam; i++)
  {
    if (valores[i] == valor)
      return true;
  }
  return false;
}

void GeraAleatorios(int numeros[], int quantNumeros, int Limite)
{
  srand(time(NULL));

  int v;
  for (int i = 0; i < quantNumeros; i++)
  {
    v = rand() % Limite;
    while (Existe(numeros, i, v))
    {
      v = rand() % Limite;
    }
    numeros[i] = v;
  }
}

//=============================================

int binarySearch(int arr[], int l, int r, int x)
{

  if (r >= l)
  {
    int mid = l + (r - l) / 2;
    if (arr[mid] == x)
      return mid;
    if (arr[mid] > x)
      return binarySearch(arr, 1, mid - 1, x);
    return binarySearch(arr, mid + 1, r, x);
  }

  return -1;
}
int main()
{
  struct timespec start, end;
  int numeros[10];
  GeraAleatorios(numeros, 10, 10);
  for (int i = 0; i < 10; i++)
  {
    cout << numeros[i] << " - ";
  }
  int size = sizeof(numeros) / sizeof(numeros[0]);
  int l = 0;
  int r = size - 1;
  mrgSort(numeros, size);
  display(numeros, size);
  int value = 5;
  clock_gettime(CLOCK_MONOTONIC, &start);

  ios_base::sync_with_stdio(false);

  int binary = binarySearch(numeros, l, r, value);

  clock_gettime(CLOCK_MONOTONIC, &end);

  if (binary > -1)
    cout << "o indice do numero " << value << " é:" << binary << endl;
  else
  {
    cout << "o numero" << value << "não existe no array" << endl;
  }

  double time_taken;
  time_taken = (end.tv_sec - start.tv_sec) * 1e9;
  time_taken = (time_taken + (end.tv_nsec - start.tv_nsec)) * 1e-9;

  cout << "Time taken by program is : " << fixed
       << time_taken << setprecision(9) << endl;
  cout << " sec" << endl;

  return 0;
}