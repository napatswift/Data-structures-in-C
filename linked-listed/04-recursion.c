#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
  int data;
  struct Node *next;
} Node;

void insert(Node **head, int val){
  Node* root = *head;
  Node* newNode = (Node*)malloc(sizeof(Node));
  newNode->data = val;
  newNode->next = root;
  *head = newNode;
}

void printl(Node *head){
  if(head == NULL){
    puts("");
    return ;
  }
  printf("%d ", head->data);
  printl(head->next);
}

void reverse(Node **root, Node *head){
  if(head->next == NULL){
    *root = head;
    return ;
  }
  reverse(root, head->next);
  Node *temp = head->next;
  temp->next = head;
  head->next = NULL;
}

int main(){
  Node *head = NULL;
  for(int i = 0; i < 10; i++)
    insert(&head, 10 - i);
  printl(head);
  reverse(&head, head);
  printl(head);
}
