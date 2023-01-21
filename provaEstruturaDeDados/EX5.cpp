//RAFAEL RODRIGUES CLEMENTI RGA: 201711316036
#include <iostream>
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
};
TreeNode *newNode(int val)
{
    TreeNode *Node = new TreeNode();
    Node->val = val;
    Node->left = NULL;
    Node->right = NULL;

    return (Node);
}
//FUNÇÃO PARA VERIFICAR SE DUAS ÁRVORES SÃO IGUAIS
int isSameTree(TreeNode *p, TreeNode *q)
{
    if (p == NULL && q == NULL)
        return 1;
    if (p != NULL && q != NULL)
    {
        return (p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right));
    }

    return 0;
}

int main()
{
    TreeNode *p = newNode(1);
    TreeNode *q = newNode(1);
    p->left = newNode(2);
    p->right = newNode(3);
    q->left = newNode(2);
    q->right = newNode(3);

    if (isSameTree(p, q))
        cout << "as arvores são iguais.";
    else
        cout << "as arvores não são iguais.";

    return 0;
}