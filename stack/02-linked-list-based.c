#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node * next;
} Node;

Node *head = NULL;

void push(int val){
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = val;
  newNode->next = head;
  head = newNode;
}

void pop(){
  Node *next = head->next;
  Node *curr = head;
  head = next;
  free(curr);
}

void print(){
  Node *curr = head;
  while(curr != NULL){
    printf("%d ", curr->data);
    curr = curr->next;
  }
  puts("");
}

int main(){
  push(5);
  push(3);
  push(9);
  print();
  pop();
  print();
  return 0;
}
