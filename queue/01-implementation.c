#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
  int data;
  struct Node* next;
} Node;

Node *front = NULL;
Node *rear = NULL;

void enqueue(int x){
  Node *temp = (Node *)malloc(sizeof(Node));
  temp->data = x;
  temp->next = NULL;
  if(front == NULL && rear == NULL){
    front = rear = temp;
    return ;
  }
  rear->next = temp;
  rear = temp;
}

void dequeue(){
  Node *temp = front;
  if(front == NULL)
    return ;
  if(front == rear){
    front = rear = NULL;
  } else{
    front = front->next;
  }
  free(temp);
}

void print(){
  Node *curr = front;
  while(curr!=NULL){
    printf("%d", curr->data);
    curr = curr->next;
    if(curr!=NULL){
      printf(" -> ");
    }
  }
}

int main(){
  for(int i = 0; i < 10; i++)
    enqueue(i + 1);
  dequeue();
  print();
}
