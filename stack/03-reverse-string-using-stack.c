#include <stdio.h>
#define MAX_SIZE 101
char A[MAX_SIZE];
int top = -1;

void push(char x){
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
    printf("%c ", A[i]);
  printf("\n");
}

void Reverse(char *string, int len){
  for(int i = 0; i<len; i++)
    push(string[i]);
  for(int i = 0; i < len; i++){
    string[i] = getTop();
    pop();
  }
}

int main(){
  char str[80];
  fgets(str, 80, stdin);

  int len = 0;
  for(; str[len] != '\n' && str[len] != '\0'; len++);

  Reverse(str, len);
  printf("%s", str);
  print();

  return 0;
}
