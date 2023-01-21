#include <iostream>

#include <bits/stdc++.h>
#include <sys/time.h>

using namespace std;

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

Node *insertNode(int v, Node *&node)
{
    if (node == NULL)
        node = new Node(v);
    else
    {
        if (v < node->data)
            node->left = insertNode(v, node->left);
        else
            node->right = insertNode(v, node->right);
    }
    return node;
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
void emOrdem(Node *node)
{
    if (node == NULL)
        return;
    emOrdem(node->left);
    cout << "Nó :" << node->data << endl;
    emOrdem(node->right);
}
void preOrdem(Node *node)
{
    if (node == NULL)
        return;
    cout << " Nó:  " << node->data << endl;
    preOrdem(node->left);
    preOrdem(node->right);
}
void posOrdem(Node *node)
{
    if (node == NULL)
        return;
    posOrdem(node->left);
    posOrdem(node->right);
    cout << " Nó :  " << node->data << endl;
}

Node *maxValue(Node *node)
{
    Node *current = NULL;

    if (current == NULL)
        return NULL;
    while (current->right != NULL)
        current = current->right;
    return current;
}
Node *minValueNode(Node *node)
{
    Node *current = node;

    if (current == NULL)
        return NULL;
    while (current->left != NULL)
        current = current->left;
    return current;
}

Node *deleteNode(Node *root, int key)
{
    if (root == NULL)
        return root;
    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else
    {
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        else if (root->left == NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        Node *temp = minValueNode(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}
int main()
{

    struct timespec start, end;

    Node *root = NULL;
    int n, data;

    clock_gettime(CLOCK_MONOTONIC, &start);

    ios_base::sync_with_stdio(false);
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin >> data;
        root = insertNode(data, root);
    }

    for(int i = 0; i < 1000; i++){
        searchNode(i, root);
    }

    clock_gettime(CLOCK_MONOTONIC, &end);
    double time_taken;
    time_taken = (end.tv_sec - start.tv_sec) * 1e9;
    time_taken = (time_taken + (end.tv_nsec - start.tv_nsec)) * 1e-9;

    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(9);
    cout << " sec" << endl;

    emOrdem(root);
}