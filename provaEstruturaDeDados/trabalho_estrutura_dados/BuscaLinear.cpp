#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <chrono>
using namespace std;

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
int indexOf(int arr[], int size, int value)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == value)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    auto start = chrono::high_resolution_clock::now();
    int numeros[1000];
    GeraAleatorios(numeros, 1000, 1000);
    
    for (int i = 0; i < 1000; i++)
    {
        cout << numeros[i] << " - ";
    }

    
    int size = sizeof(numeros) / sizeof(numeros[0]);

    int value = 788;

    ios_base::sync_with_stdio(false);

    int index = indexOf(numeros, size, value);

    auto end = chrono::high_resolution_clock::now();

    double time_taken =
        chrono::duration_cast<chrono::nanoseconds>(end - start).count();

    time_taken *= 1e-9;

    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(9);
    cout << " sec" << endl;
    if (index > -1)
        cout << "o indice do numero " << value << " é : " << index;
    else
        cout << "o numero " << value << " não existe no array";
    return 0;
}