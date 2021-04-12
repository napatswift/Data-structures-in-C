#include <stdio.h>
char stack[128];
int top = -1;

/*
 * checkBalancedParenthesis(string){
 *  n = legnth(string)
 *  create a stack: S
 *  for(i = 0 to n -1 ){
 *    if string[i] is 's' or '{' or '['
 *      push(string[i])
 *    else if string[i] is ')' or '}' or ']'{
 *      if((S is empty) or (top does not pair with string[i]))
 *        NOT BALANCED
 *      else
 *        pop()
 *    }
 *    return S is empty ? BALANCED : NOT BALANCED
 *  }
 *
 */

int main(){
  return 0;
}
