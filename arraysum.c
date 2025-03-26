#include<stdio.h>
int sumArray(int num[],int sum,int limit);
int main(){
  int limit,sum=0;
  printf("Enter the limit:");
  scanf("%d",&limit);
  int num[limit];
  printf("Enter the elements:");
  for(int i=0;i<limit;i++){
    scanf("%d",&num[i]);
  }
  sum=sumArray(num,sum,limit);
  printf("The sum of the elements is: %d",sum);
}
int sumArray(int num[],int sum,int limit){
  for(int i=0;i<limit;i++){
    sum=sum+num[i];
  }
  return sum;
}
