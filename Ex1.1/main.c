#include <stdio.h>


int main()
{
    int a, b; //first matrix dimensions
    int p, q; //second matrix dimensions
    int sum = 0;
    int first[10][10], second[10][10], multiply[10][10];
 
  printf("Enter the number of rows and columns of first matrix (10x10 is set as maximum):\n");
  scanf("%d%d", &a, &b);
  printf("Enter the elements of first matrix\n");
 
  for (int i = 0; i < a; i++)
    for (int j = 0; j < b; j++)
      scanf("%d", &first[i][j]);
 
  printf("Enter the number of rows and columns of second matrix (10x10 is set as maximum):\n");
  scanf("%d%d", &p, &q);
 
  if (b != p)
    printf("Matrices with entered sizes can't be multiplied\n");
  else
  {
    printf("Enter the elements of second matrix\n");
 
    for (int i = 0; i < p; i++)
      for (int j = 0; j < q; j++)
        scanf("%d", &second[i][j]);
 
    for (int i = 0; i < a; i++) {
      for (int j = 0; j < q; j++) {
        for (int k = 0; k < p; k++) {
          sum = sum + first[i][k]*second[k][j];
        }
 
        multiply[i][j] = sum;
        sum = 0;
      }
    }
 
    printf("Product of entered matrices:-\n");
 
    for (int i = 0; i < a; i++) {
      for (int j = 0; j < q; j++)
        printf("%d\t", multiply[i][j]);
        printf("\n");
    }
  }
 
  return 0;
}