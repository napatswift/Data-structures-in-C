#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
  int data;
  struct Node *next;
} Node;

Node *stack[64];
int top = -1;

void insert(Node **head, int val){
  Node *curr = *head;
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->next = NULL;
  newNode->data = val;
  if(*head == NULL){
    *head = newNode;
    return ;
  }

  while(curr->next!= NULL){
    curr = curr->next;
  }

  curr->next = newNode;
}

void print(Node *head){
  Node *curr = head;
  while(curr!=NULL){
    printf("%d ", curr->data);
    curr = curr->next;
  }
  puts("");
}

void push(Node *p){
  if(top < 64)
    stack[++top] = p;
}

void pop(){
  top--;
}
int isEmpty(){
  return top == -1;
}

Node *getTop(){
  return stack[top];
}

Node *reversed(Node *head){
  Node *curr = head;
  while(curr!=NULL){
    push(curr);
    curr = curr->next;
  }
  Node *temp = getTop();
  Node *root = temp;
  while(!isEmpty()){
    temp->next = getTop();
    pop();
    temp = temp->next;
  }
  temp->next = NULL;
  return root;
}

int main(){
  Node *head = NULL;
  int i;
  for(i = 0; i < 10; i++)
    insert(&head, i+1);
  print(head);
  Node *rhead = reversed(head);
  print(rhead);
}
