#include<stdio.h>
int main(){
  int num;
  printf("\nEnter the number:");
  scanf("%d",&num);
  if(num%2==0){
    printf("\nThe number is even");
  }
  else{
    printf("\nThe number is odd");
  }return 0;
}
