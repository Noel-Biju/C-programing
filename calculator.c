#include<stdio.h>
int main(){
  int num1,num2,sum=0;
  char operator;
  printf("\nEnter the first number:");
  scanf("%d",&num1);
  printf("\nEnter the second number:");
  scanf("%d",&num2);
  printf("\nEnter one of the operators(+,-,*,/,%%):");
  scanf(" %c",&operator);
  switch(operator){
    case '+':
    printf("%d+%d=%d\n",num1,num2,num1+num2);
    break;
    case '-':
    printf("%d-%d=%d\n",num1,num2,num1-num2);
    break;
    case '*':
    printf("%d*%d=%d\n",num1,num2,num1*num2);
    break;
    case '/':
    printf("%d/%d=%d\n",num1,num2,num1/num2);
    break;
    case '%':
    printf("%d %% %d=%d\n",num1,num2,num1%num2);
    break;
    default:
    printf("\nInvalid operator");
  }
  return 0;
}
