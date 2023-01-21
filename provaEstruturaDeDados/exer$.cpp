#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class TreeNode{
public:
    int val;
    TreeNode* left;
    TreeNode* right;
};

TreeNode* newNode(int val){
    TreeNode* node = new TreeNode();
    node->val = val;
    node->left = NULL;
    node->right = NULL;

    return (node);
}

TreeNode* insert(int v, TreeNode*& node){
    if(node == NULL)
        return NULL;
    else{
        if(v < node->val)
            node->left = insert(v, node->left);
        else
            node-> right = insert(v, node->right);
    }
    return node;
}
void emOrdem(TreeNode *node) {
  if (node == NULL)
    return;
  emOrdem(node->left);
  cout << "Nó :" << node->val << endl;
  emOrdem(node->right);
}
int minValue(TreeNode* node)
{
	if (node->left == NULL)
		return node->val;
	return minValue(node->left);
}

int maxValue(TreeNode* node){
    if(node->right == NULL)
        return node->val;
    return maxValue(node -> right);
}

int main(){

    TreeNode *root = NULL;
	root = insert(4, root);
    
	root = insert(2, root);
	insert(1, root);
	insert(3, root);
	insert(6, root);
	insert(5, root);
    emOrdem(root);
	cout << minValue(root) << endl;
    cout << maxValue(root) << endl;
    cout << "diferenca: " << maxValue(root) - minValue(root) << endl;


    return 0;
}