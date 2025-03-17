#include<stdio.h>
void multiply(int num1,int num2);
int main(){
  int num1,num2;
  printf("Enter the two numbers:");
  scanf("%d%d",&num1,&num2);
  multiply(num1,num2);
  return 0;
}
void multiply(int num1,int num2){
  printf("The products of the two numbers are : %d\n",num1*num2);
}
