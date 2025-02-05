#include <stdio.h>
int main(){
  int i,limit,n,flag=0;
  printf("\nEnter the limit:");
  scanf("%d",&limit);
  int num[limit];
  printf("\nEnter %d elements",limit);
  for(i=0;i<limit;i++){
    printf("\nEnter the element:");
    scanf("%d",&num[i]);
  }
  printf("\nEnter the number you want to search:");
  scanf("%d",&n);
  for(i=0;i<limit;i++){
    if(n==num[i]){
      printf("\nThe position of %d is %d",n,i+1);
      flag=1;
     }
    }
    if(flag==0){
      printf("\nThe element is not in the array");
      }
    return 0;
}

