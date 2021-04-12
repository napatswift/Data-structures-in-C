/* Evaluation of expressions
 *  2 + 3
 *  A - B
 * (P * 2)
 * 
 * Order of operation
 * 1) Parentheses
 * 2) Exponexts (r to l)
 * 3) Multiplication and division (l to r)
 * 4) Addition and subtraction (l to r)
 *
 * Infix     | Prefix     | Postfix
 * 2 + 3     | + 2 3      | 2 3 +
 * p + q     | + p q      | p q +
 * a + b * c | + a * b c  | a b c * +
 *
 *evaluatePostfix(str){
 *  create a stack S
 *  for( i = 0 to length(str) - 1 ){
 *    if (str[i] is operand)
 *      push(str[i])
 *    else if (str[i] is operator){
 *      op1 = pop();
 *      op2 = pop();
 *      resul = perform(str[i], op1, op2);
 *      push(resul);
 *    }
 *  }
 *}
 *
 * https://gist.github.com/mycodeschool/7702441
 *
 * Infix to posfix
 *
 *  infixToPostfix(str){
 *    create a statck S
 *    for(i = 0 to length(str) - 1){
 *      if(str[i] is operator){
 *        while(!S.empty()) and HasHigherPrec(S.top(), exp[i])){
 *          res = res + s.top();
 *          S.pop()
 *        }
 *      }
 *    }
 *    while(!S.empty()){
 *      res = res + top()
 *      S.pop()
 *    }
 *   return res
 * }
 *
 * https://gist.github.com/mycodeschool/7867739
 *
 */
