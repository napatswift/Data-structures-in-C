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

void delete(Node **head, int n){
  Node *curr = *head;
  if(n==1){
    *head = curr->next;
    free(curr);
    return ;
  }
  size_t i;
  for(i = 0; i < n-2; i++)
    curr = curr->next;
  Node *target = curr->next;
  curr->next = target->next;
  free(target);
    
}

void printl(Node *head){
  Node* curr = head;
  while(curr!=NULL){
    printf("%d", curr->data);
    curr = curr->next;
    if(curr)
      printf(" -> ");
    else
      printf("\n");
  }
}

void reverse(Node **head){
  Node *curr = *head;
  Node *prev = NULL, *next;
  while(curr != NULL){
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  *head = prev;
}


int main(){
  Node *head = NULL;
  for(int i = 0; i < 10; i++)
    insert(&head, 10 - i);
  delete(&head, 5);
  printl(head);
  reverse(&head);
  printl(head);
}
