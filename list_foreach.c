#include <stdio.h>
#include <stdlib.h>

int data[3];

int ** dynamic_array_alloc(size_t N, size_t M)
{
    int **A = (int **)malloc(N*sizeof(int *));
    for(int i = 0; i < N; i++) {
        A[i] = (int *)malloc(M*sizeof(int));
    }
    return A;
}

void dynamic_array_free(int **A, size_t N)
{
    for(int i = 0; i < N; i++) {
        free(A[i]);
    }
    free(A);
}

int **dynamic_array_test(size_t N, size_t M)
{
    int **A = dynamic_array_alloc(N, M);
    int x = 1;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            A[i][j] = x;
            x += 1;
        }
    }
    return (A);
}

void square(int x, int y, int **ptr, int n)
{
  int i = 0;
  int j;
  int **p;
  while (i<=n)
  {
    j = 0;
    while (j <= n)
    {
      p = &ptr[i][x+j];
      if (x+j > 4 || ptr[i][x+j] % 8 == 0)
      {
        data[0] = x;
        data[1] = y;
        data[2] = n-1;
        return ;
      }
      j++;
    }
    i++;
  }
  square(x,y,ptr, n+1);
}

void bazar_vokzal(int **ptr, int y)
{
  int n = data[2];
  int x = 0;
  int **kek;
  while (x<=4)
  {
    square(x+n,y, ptr, n);
    if (x>=4)
    {
      y++;
    }
    x++;
  }
}

int main()
{
  int **ptr;
    int matrix_height = 4;
    int matrix_width = 5;
  int *coord;

    ptr = dynamic_array_test(matrix_height, matrix_width);
  int x = 0;
  int n;
  n = data[2];
  bazar_vokzal(ptr, 0);
    return 0;
}