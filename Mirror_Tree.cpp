// function Template for C++

/* A binary tree node has data, pointer to left child
   and a pointer to right child /
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node* node) {
        //base case
        if(node == NULL){
            return ;
        }
       
        mirror(node->left);
        mirror(node->right);
        swap(node->left,node->right);
        
        
    }
};
