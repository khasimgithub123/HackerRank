Struct Node {
  int data;
  Node *left;
  Node *right;
};

/**
* recursive solution
*/

bool IsSubtreeLesser(Node *root, int value);
bool IsSubtreeGreater(Node *root, int value);

bool IsBinarySearchTree(Node *root)
{
  if(root == NULL) return true;
  if(IsSubtreeLesser(root->left, root->data)
    && IsSubtreeGreater(root->right, root->data)
    && IsBinarySearchTree(root->left)
    && IsBinarySearchTree(root->right))
    return true;
  else
    return false;
}

bool IsSubtreeLesser(Node *root, int value)
{
  if(root == NULL)  return true;
  if(root -> data <= value
    && IsSubtreeLesser(root -> left, value)
    && IsSubtreeLesser(root -> right, value))
    
    return true;
  else
    return false;
}

bool IsSubtreeGreater(Node *root, int value)
{
  if(root == NULL) return true;
  if(root -> data > value)
    && IsSubtreeGreater(root -> left, value)
    && IsSubtreeGreater(root -> right, value))
    return true;
  else
    return false;
}


/**
* best solution for the performance
*/

bool IsBstUtil(Node *root, int minValue, int maxValue)
{
  if(root == NULL) return true;
  
  if(root->data < minValue && root->data > maxValue
    && IsBstUtil(root->left, minValue, root->data)
    && IsBstUtil(root->right, root->data, maxValue))
      return true;
  else
    return false;
}
bool IsBinarySearchTree(Node *root)
{
  return IsBstUtil(root, INT_MIN, INT_MAX);
}


