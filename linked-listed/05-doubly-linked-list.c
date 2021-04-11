#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
  int data;
  struct Node *next, *prev;
} Node;

Node *getNewNode(int val){
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = val;
  newNode->next = NULL;
  newNode->prev = NULL;
  return newNode;
}

void insert(Node **head, int val){
  Node *root = *head;
  Node *newNode = getNewNode(val);
  if(root == NULL){
    *head = newNode;
    return ;
  }
  root->prev = newNode;
  newNode->next = root;
  *head = newNode;
}

void insertatend();
void printl();

int main(){
  struct Node *head = NULL;
  for(int i = 0; i < 10; i++)
    insert(&head, i);
  return 0;
}
