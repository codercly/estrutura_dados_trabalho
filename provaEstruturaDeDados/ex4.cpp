// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
and a pointer to right child */
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

/* Helper function that allocates a new node
with the given data and NULL left and right
pointers. */
struct node *newNode(int data)
{
    struct node *node = (struct node *)
    malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return (node);
}

/* Give a binary search tree and a number,
inserts a new node with the given number in
the correct place in the tree. Returns the new
root pointer which the caller should then use
(the standard trick to avoid using reference
parameters). */
struct node *insert(struct node *node, int data)
{

    /* 1. If the tree is empty, return a new,
    single node */
    if (node == NULL)
        return (newNode(data));
    else
    {

        /* 2. Otherwise, recur down the tree */
        if (data <= node->data)
            node->left = insert(node->left, data);
        else
            node->right = insert(node->right, data);

        /* return the (unchanged) node pointer */
        return node;
    }
}

// Function to return the minimum node
// in the given binary search tree
int minValue(struct node *node)
{
    if (node->left == NULL)
        return node->data;
    return minValue(node->left);
}

int maxValue(struct node *node)
{
    if (node->right == NULL)
        return node->data;
    return maxValue(node->right);
}
int difMaxMin(struct node *node)
{
    int d = maxValue(node) - minValue(node);
    
}
// Driver code
int main()
{

    // Create the BST
    struct node *root = NULL;
    root = insert(root, 4);
    insert(root, 8);
    insert(root, 4);
    insert(root, 10);
    insert(root, 3);
    insert(root, 6);
    insert(root, 14);
    insert(root, 7);

    cout << minValue(root) << endl;
    cout << maxValue(root) << endl;
   // cout << "diferenca: " << maxValue(root) - minValue(root) << endl;
    cout << "diferenca:"<<" "<<difMaxMin(root);
    return 0;
}
