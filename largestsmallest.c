#include <stdio.h>
int main(){
  int i,limit,largest,smallest,lapos,smpos;
  printf("\nEnter the limit:");
  scanf("%d",&limit);
  int num[limit];
  printf("\nEnter %d elements",limit);
  for(i=0;i<limit;i++){
    printf("\nEnter the element:");
    scanf("%d",&num[i]);
  }
  largest=num[0];
  smallest=num[0];
  for(i=0;i<limit;i++){
    if(num[i]>largest){
      largest=num[i];
    }
    if(num[i]<smallest){
      smallest=num[i];
    }
  }
  for(i=0;i<limit;i++){
    if(largest==num[i]){
      lapos=i+1;}
    if(smallest==num[i]){
      smpos=i+1;}
  }
  printf("\nThe largest number is %d at the position %d",largest,lapos);
  printf("\nThe smallest number is %d at the position %d",smallest,smpos);
  return 0;
}

