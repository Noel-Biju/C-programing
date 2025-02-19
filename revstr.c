#include<stdio.h>
int main(){
  char str[20],temp;
  int i,j,l;
  printf("Enter the string:\n");
  scanf("%s",str);
  for (i=0;str[i]!='\0';i++);
  l=i-1;
  for (j=0;j<=l;j++){
    temp=str[l];
    str[l]=str[j];
    str[j]=temp;
    l--;
  }
  printf("The Reversed string is:\n");
  printf("%s",str);
  return 0;
}         


