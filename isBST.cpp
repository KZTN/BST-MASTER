#include<bits/stdc++.h> 
#include<iostream> 
using namespace std; 
  

class node  
{  
    public: 
    int data;  
    node* left;  
    node* right;  
      

    node(int data) 
    { 
        this->data = data; 
        this->left = NULL; 
        this->right = NULL; 
    } 
}; 
  
bool isBST(node* node, int min, int max);  
  

bool isBST(node* node)  
{  
    return(isBST(node, INT_MIN, INT_MAX));  
}  
  
bool isBST(node* node, int min, int max)  
{  
    if (node==NULL)  
        return true;  
              
    if (node->data < min || node->data > max)  
        return false;  
      
    
        return isBST(node->left, min, node->data-1);
        return isBST(node->right, node->data+1, max);   
}  
  
int main()  
{  
    node *root = new node(4);  
    root->left = new node(5);  
    root->right = new node(2);  
    root->left->left = new node(1);  
    root->left->right = new node(3);  
      
    if(isBST(root))  
        cout<<"e BST";  
    else
        cout<<"nao e BST";  
          
    return 0;  
}  