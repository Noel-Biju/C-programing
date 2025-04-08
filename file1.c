#include<stdio.h>
int main(){
  FILE *fp;
  char ch;
  fp=fopen("File.txt","w");
  while(ch=getc(stdin)!=EOF){
    putc(ch,fp); 
  }
  fclose(fp);
  fp=fopen("File.txt","r");
  while((ch=getc(fp))!=EOF){
    printf("%c",ch);
  }
  fclose(fp);
  return 0;
}
  
