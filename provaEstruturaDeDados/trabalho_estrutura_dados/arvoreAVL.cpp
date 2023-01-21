#include <iostream>
using namespace std;
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

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    int height;

    Node(int v)
    {
        data = v;
        left = NULL;
        right = NULL;
        height = 1;
    }
};
int height(Node *N)
{
    if (N == NULL)
        return 0;
    return N->height;
}
int getBalance(Node *N)
{
    if (N == NULL)
        return 0;
    return height(N->left) - height(N->right);
}

Node *rightRotate(Node *y)
{
    Node *x = y->left;
    Node *T2 = x->right;
    x->right = y;
    y->left = T2;
    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;
    return x;
}
Node *leftRotate(Node *x)
{
    Node *y = x->right;
    Node *T2 = y->left;
    y->left = x;
    x->right = T2;
    x->height = max(height(x->left), height(x->right)) + 1;
    y->height = max(height(y->left), height(y->right)) + 1;
    return y;
}

Node *insert(Node *node, int data)
{
    if (node == NULL)
        return (new Node(data));
    if (data < node->data)
        node->left = insert(node->left, data);
    else if (data > node->data)
        node->right = insert(node->right, data);
    else
        return node;
    node->height = 1 + max(height(node->left), height(node->right));
    int balance = getBalance(node);
    // Left Left Case
    if (balance > 1 && data < node->left->data)
        return rightRotate(node);
    // Right Right Case
    if (balance < -1 && data > node->right->data)
        return leftRotate(node);
    // Left Right Case
    if (balance > 1 && data > node->left->data)
    {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }
    // Right Left Case
    if (balance < -1 && data < node->right->data)
    {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }
    return node;
}
void preOrdem(Node *node)
{
    if (node == NULL)
        return;
    cout << " Nó:" << node->data << endl;
    preOrdem(node->left);
    preOrdem(node->right);
}

int main()
{
    auto start = chrono::high_resolution_clock::now();
    Node *root = NULL;
    int numeros[1000];
    GeraAleatorios(numeros, 1000, 1000);
    ios_base::sync_with_stdio(false);
    for (int i = 0; i < 1000; i++)
    {
        // cout << numeros[i] << " - ";
        root = insert(root, numeros[i]);
    }
    preOrdem(root);
    auto end = chrono::high_resolution_clock::now();
    
    double time_taken =
        chrono::duration_cast<chrono::nanoseconds>(end - start).count();

    time_taken *= 1e-9;

    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(9);
    cout << " sec" << endl;
    return 0;
}