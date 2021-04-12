#include <stdio.h>
#define MAX_SIZE 101
int A[MAX_SIZE];
int top = -1;

void push(int x){
  if(top == MAX_SIZE - 1){
    printf("ERROR");
    return ;
  }
  A[++top] = x;
}

void pop() {
  if(top == -1){
    printf("ERROR");
    return ;
  }
  top--;
}

int getTop(){
  return A[top];
}

void print(){
  int i;
  printf("Stack: ");
  for(i = 0; i <= top; i++)
    printf("%d ", A[i]);
  printf("\n");
}

int main(){
  push(2);
  push(5);
  push(10);
  pop();
  push(12);
  print();

  return 0;
}
