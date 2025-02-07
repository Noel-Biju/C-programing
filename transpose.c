#include <stdio.h>
int main(){
  int row,col;
  printf("\nEnter the row and coloumn:");
  scanf("%d%d",&row,&col);
  int mat[row][col];
  printf("\nEnter the elements:");
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      scanf("%d",&mat[i][j]);
    }
  }
  printf("\nThe original matrix is:\n");
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      printf("%d\t",mat[i][j]);
    }
    printf("\n");
  }
  printf("\nThe transpose of the matrix is:\n");
  for(int i=0;i<col;i++){
    for(int j=0;j<row;j++){
      printf("%d\t",mat[j][i]);
    }
    printf("\n");
  }
  return 0;
}
