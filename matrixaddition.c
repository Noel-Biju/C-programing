//Name:Noel Biju
//Date:7/02/2025 
#include <stdio.h>
int main(){
  int row,col;
  printf("\nEnter the row and column:");
  scanf("%d%d",&row,&col);
  int matrix[row][col];
  printf("\nEnter the elements of first matrix:");
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      scanf("%d",&matrix[i][j]);
    }
  }
  int matrix1[row][col];
  printf("\nEnter the elements of second matrix:");
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      scanf("%d",&matrix1[i][j]);
    }
  }
  int matrix2[row][col];
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      matrix2[i][j]=matrix[i][j]+matrix1[i][j];
    }
  }
  printf("\nThe sum of the 2 matrices is:\n");
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      printf("%d\t",matrix2[i][j]);
    }
    printf("\n");
  }
  return 0;
}
