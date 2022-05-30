#include <stdio.h>
// main function
int main()
{
  // matrix A 
  int a[3][3];
  for(int i=0;i<3;i++){
	  for(int j=0;j<3;j++){
		  scanf("%d",&a[i][j]);
	  }
  }

  // declare matix C
  int transpose[3][3];
  
  // find transpose of a matrix
  // outer loop for row
  for (int i = 0; i < 3; i++) {
    // inner loop for column
    for (int j = 0; j < 3; j++) {
      // formula
      transpose[i][j] = a[j][i];
    }
  }

  // display matrix
  printf("Transpose of Matrix = \n");
  for(int i=0; i<3; i++)
  {
    for(int j=0; j<3; j++)
    {
      printf("%d ", transpose[i][j]);
    }
    printf("\n"); // new line
  }

  return 0;
}
