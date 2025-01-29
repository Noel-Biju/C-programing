#include<stdio.h>
int main(){
  int num,fact=1;
  printf("\nEnter the number:");
  scanf("%d",&num);
  while(num>0){
    fact=fact*num;
    num--;
  }printf("\nThe factorial of the number is:%d",fact);
  return 0;
}
  
