#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

void inorderTraversal(TreeNode* root, vector<int>& vec){
  if(root == nullptr)
    return;
  inorderTraversal(root->left, vec);
  vec.push_back(root->val);
  inorderTraversal(root->right, vec);
}

void BSTandMaxHeapConversion(TreeNode* root, vector<int>& vec, int& idx){
  if(root == nullptr)
    return;
  BSTandMaxHeapConversion(root->left, vec, idx);
  BSTandMaxHeapConversion(root->right, vec, idx);
  root->val = vec[idx++];
}

void BSTtoMaxHeap(TreeNode* root){
  // Stroe value in TreeNode
  vector<int> vec;
  //index for iter vector
  int idx = 0;
  // Perform in-order traversal to get sorted elements
  inorderTraversal(root, vec);

  // BST to MaxHeap conversion
  BSTandMaxHeapConversion(root, vec, idx);
}

// Function to print level order traversal of tree
void printLevelOrder(const TreeNode* root){
  if(root == nullptr)
    return;

  queue<const TreeNode*> q;
  q.push(root);

  int level = 1;
  while(!q.empty()){
    int levelsize = q.size();
    cout << "Level: " << level << endl;
    for(int i = 0; i < levelsize; ++i){
      const TreeNode* curr = q.front();
      q.pop();
      cout << curr->val << " ";

      if(curr->left != nullptr)
        q.push(curr->left);
      if(curr->right != nullptr)
        q.push(curr->right);
    }
    cout << endl;
    ++level;
  }
}

int main(){
  TreeNode* root     = new TreeNode(4);
  root->left         = new TreeNode(2);
  root->right        = new TreeNode(6);
  root->left->left   = new TreeNode(1);
  root->left->right  = new TreeNode(3);
  root->right->left  = new TreeNode(5);
  root->right->right = new TreeNode(7);

  cout << "BST before conversion to Max Heap by level order: \n";
  printLevelOrder(root);
  cout << endl;

  BSTtoMaxHeap(root);
  cout << "Max Heap after conversion: \n";
  printLevelOrder(root);
  cout << endl;
  return 0;
}
