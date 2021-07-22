#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
  int data;
  struct Node* left;
  struct Node* right;
} Node;

Node *getNewNode(int data){
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = data;
  newNode->left = newNode->right = NULL;
  return newNode;
}

Node *insert(Node *root, int data){
  if(root == NULL)
    root = getNewNode(data);
  else if(data < root->data)
    root->left = insert(root->left, data);
  else if(data > root->data)
    root->right = insert(root->right, data);
  return root;
}

int search(Node *root, int data){
  if(root == NULL)
    return 0;
  else if(root->data == data)
    return 1;
  else if(data <= root->data)
    return search(root->left, data);
  else
    return search(root->right, data);
}

int main(){
  Node* root = NULL;
  root = insert(root, 15);
  root = insert(root, 10);
  root = insert(root, 20);
  printf("%s", search(root, 10) ? "Y" : "N");
  return 0;
}
