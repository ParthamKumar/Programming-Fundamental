#include <stdio.h>
int main() {
    int a,b,row,c;
      int x[15][15], trp[15][15];
        printf("number of rows: ");
            scanf("%d",&row);
            printf("number of columns: ");
            scanf("%d",&c);
            printf("\nEnter location elements:\n");
  for (a = 0; a <row; ++a)
  for ( b= 0; b< c; ++b) {
    printf("Enter element a%d%d: ", a + 1, b+ 1);
    scanf("%d", &x[a][b]);
  }
  printf("\nEntered matrix: \n");
  for ( a = 0; a < row; ++a)
  for ( b= 0; b< c; ++b) {
    printf("%d  ", x[a][b]);
    if (b== c - 1)
    printf("\n");
  }
  for ( a = 0; a <row; ++a)
  for ( b= 0; b< c; ++b) {
    trp[a][b] = x[a][b];
  }
  printf("\nTranspose of the matrix:\n");
  for ( a = 0; a < c; ++a)
  for ( b= 0; b<row; ++b) {
    printf("%d  ", trp[a][b]);
    if (b==row - 1)
    printf("\n");
  }
}
