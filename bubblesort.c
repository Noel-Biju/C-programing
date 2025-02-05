#include <stdio.h>
int main(){
 int i,limit,j,temp;
  printf("\nEnter the limit:");
  scanf("%d",&limit);
  int num[limit];
  printf("\nEnter %d elements",limit);
  for(i=0;i<limit;i++){
    printf("\nEnter the element:");
    scanf("%d",&num[i]);
  }
  for(i=0;i<limit-1;i++){
    for(j=0;j<limit-i;j++){
      if(num[j]>num[j+1]){
        temp=num[j];
        num[j]=num[j+1];
        num[j+1]=temp;
        }
      }
    }
    printf("\nThe sorted array is:\t");
    for(i=0;i<limit;i++){
      printf("%d ",num[i]);}
    return 0;
  }
