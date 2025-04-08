#include<stdio.h>
int main(){
  FILE *fp;
  fp=fopen("File.txt","w");
  putc('A',fp);
  fclose(fp);
  fp=fopen("File.txt","r");
  char ch=getc(fp);
  printf("%c",ch);
  fclose(fp);
  return 0;
}

  
