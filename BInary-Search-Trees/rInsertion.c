#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *lchild;
    struct Node *rchild;
};

struct Node* insert(struct Node* root,int data){
    if(root == NULL){
        struct Node * t = (struct Node*) malloc(sizeof(struct Node));
        t -> data = data;
        t->lchild = t->rchild = root;
        return t;
    }
    if(data < root->data){
        root->lchild = insert(root->lchild,data);
    }
    else if(data > root->data){
        root->rchild = insert(root->rchild,data);
    }
    return root;
}

void rInorder(struct Node* root){
    if(root != NULL){
        rInorder(root->lchild);
        printf("%d -> ",root->data);
        rInorder(root->rchild);
    }
}

int main(){
    struct Node *root = NULL;
    root = insert(root,7);
    root = insert(root,9);
    root = insert(root,8);
    root = insert(root,3);
    root = insert(root,4);
    root = insert(root,1);
    root = insert(root,2);

    printf("Inorder traversal of constructed binary search tree :- \n");
    rInorder(root);
}