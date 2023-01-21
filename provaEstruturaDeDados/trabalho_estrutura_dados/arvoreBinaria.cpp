#include <iostream>
#include <time.h>
#include <stdlib.h>
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

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node *insert(int v, Node *&node)
{
    if (node = NULL)
        node = new Node(v);
    else
    {
        if (v < node->data)
            node->left = insert(v, node->left);
        else
            node->right = insert(v, node->right);
    }
    return node;
}

void emOrdem(Node *node)
{
    if (node == NULL)
        return;
    emOrdem(node->left);
    cout << "Nó :" << node->data << endl;
    emOrdem(node->right);
}

Node *searchNode(int v, Node *&node)
{
    if (node == NULL)
        return NULL;
    if (v == node->data)
        return node;
    if (v < node->data)
        return searchNode(v, node->left);
    return searchNode(v, node->right);
}

int main()
{
    Node *root;
    int numeros[500];
    GeraAleatorios(numeros, 500, 1000);
    for (int i = 0; i < 500; i++)
    {
        //cout << numeros[i] << " - ";
        insert(numeros[i], root);
    }

    emOrdem(root);

    return 0;
}