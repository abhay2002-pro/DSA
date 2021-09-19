#include <iostream>

using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node * root = NULL;

struct Node* newNode(int data){
    struct Node * node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

void print_k_distance(struct Node * node,int k){
    if(node == NULL) return;
    if(k == 0){
        cout<<node->data<<" ";
    }
    print_k_distance(node->left,k-1);
    print_k_distance(node->right,k-1);
}

int main(){
    root = newNode(5);
    root -> left = newNode(10);
    root -> right = newNode(15);
    root -> left -> left = newNode(12); 
    root -> left -> right = newNode(13); 
    root -> right -> left = newNode(14); 
    root -> right -> right = newNode(17);
    int k = 2;
    cout<<"Nodes at level "<<k+1<<" :- ";
    print_k_distance(root,2);

    //      5        
    //     / \ 
    //   10   15
    //  / \   / \ 
    // 12 13 14 17
}