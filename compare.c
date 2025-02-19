#include<stdio.h>
#include<string.h>
int main(){
  char str1[20],str2[20];
  printf("Enter the first string:\n");
  scanf("%s",str1);
  printf("Enter the second string:\n");
  scanf("%s",str2);
  if (strcmp(str1,str2)==0){
    printf("The strings are equal");
  }else{
    printf("The strings are not equal");
  }
  return 0;
}
