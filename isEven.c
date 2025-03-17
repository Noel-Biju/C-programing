#include<stdio.h>
int isEven(int num);
int main(){
  int num;
  printf("Enter the number:");
  scanf("%d",&num);
  if(isEven(num)){
    printf("The number is even.");
  }else{
    printf("The number is odd.");
  }
  return 0;
}
int isEven(int num){
  if(num%2==0){
    return 1;
  }else{
    return 0;
  }
}
