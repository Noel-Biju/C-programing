#include<stdio.h> 
int main(){
  char str[50];
  int frequency[26]={0};
  int i;
  printf("Enter a String: ");
  scanf("%s",str);
  for(i=0;str[i]!='\0';i++){
    char ch=str[i];
    if ((ch>='A'&&ch<='Z') || (ch>='a'&&ch<='z')){
      if (ch>='A'&&ch<='Z'){
      ch=ch+32;
      }
      frequency[ch-97]++;
    }
  }
  printf("Letter Frequencies:\n");
  for(i=0;i<26;i++){
    if (frequency[i]>0){
      printf("%c:%d\n",97+i,frequency[i]);
    }
  }
  return 0;
}

