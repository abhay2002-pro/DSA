#include<iostream>
#include<queue>

using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node * root = NULL;

void level_order_traversal_line(struct Node * root){
    queue<struct Node *> Q;
    Q.push(root);
    while(!Q.empty()){
        int count = Q.size();
        for(int i = 0; i < count; i++){
            Node* curr = Q.front();
            cout<<curr->data<<" ";
            if(curr->left!=NULL) Q.push(curr->left);
            if(curr->right!=NULL) Q.push(curr->right);
            Q.pop();
        }
        cout<<"\n";
    }
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

    level_order_traversal_line(root);

    //      5
    //     / \ 
    //   10   15
    //  / \   / \
    // 12 13 14 17

}