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
  Node* curr = head;
  while(curr!=NULL){
    printf("%d", curr->data);
    curr = curr->next;
    if(curr)
      printf(" ");
    else
      printf("\n");
  }
}

int main(){
  Node *head = NULL;
  for(int i = 1; i <= 10; i++)
    insert(&head, 10 - i + 1);
  delete(&head, 5);
  printl(head);
}
