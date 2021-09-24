#include<iostream>
#include <limits.h>

using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node * root = NULL;

int maximumOfBT(struct Node* root){
    if(root == NULL){
        return INT_MIN;
    }
    return max(root->data,max(maximumOfBT(root->left),maximumOfBT(root->right)));
}

struct Node* newNode(int data)
{
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));  
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

int main(){
    
    root = newNode(5);
    root -> left = newNode(10);
    root -> right = newNode(15);
    root -> left -> left = newNode(12); 
    root -> left -> right = newNode(13); 
    root -> right -> left = newNode(14); 
    root -> right -> right = newNode(17);

    cout<<maximumOfBT(root);

    //      5
    //     / \ 
    //   10   15
    //  / \   / \
    // 12 13 14 17

}