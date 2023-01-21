/*RAFAEL RODRIGUES CLEMENTI RGA:201711316036*/
/*OBS: para a resolução desse exercício não consegui inplementar desse forma: 
 class TreeNode {
 public:
 int val;
 TreeNode *left;
 TreeNode *right;
 Após pesquisas consegui da maneira que esta no código.*/
#include <iostream>
using namespace std;


struct TreeNode
{
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct TreeNode *newNode(int data)
{
    struct TreeNode *node = (struct TreeNode *)
    malloc(sizeof(struct TreeNode));
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return (node);
}


struct TreeNode *insert(struct TreeNode *node, int data)
{


    if (node == NULL)
        return (newNode(data));
    else
    {

        if (data <= node->data)
            node->left = insert(node->left, data);
        else
            node->right = insert(node->right, data);

        return node;
    }
}


int minValue(struct TreeNode *node)
{
    if (node->left == NULL)
        return node->data;
    return minValue(node->left);
}

int maxValue(struct TreeNode *node)
{
    if (node->right == NULL)
        return node->data;
    return maxValue(node->right);
}
//retorna a diferença do Maior e Menor elemento.
int difMaxMin(struct TreeNode *node)
{
    int d = maxValue(node) - minValue(node);
    
}

int main()
{


    struct TreeNode *root = NULL;
   // root = insert(root, 4);
    insert(root, 8);
    insert(root, 4);
    insert(root, 10);
    insert(root, 3);
    insert(root, 6);
    insert(root, 14);
    insert(root, 7);

    cout << minValue(root) << endl;
    cout << maxValue(root) << endl;

    cout << "diferenca:"<<" "<<difMaxMin(root);
    return 0;
}
