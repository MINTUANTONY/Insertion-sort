#include <stdio.h>
int c,d,t;
int sort(int *array)
{
for (c = 1 ; c <= 7 - 1; c++) {
    d = c;
 
    while ( d > 0 && array[d] < array[d-1]) {
      t          = array[d];
      array[d]   = array[d-1];
      array[d-1] = t;
 
      d--;
    }
  }
}
int main()
{
  int n, array[7]={4,23,43,38,15,10,30};
 
  sort(array);
  printf("Sorted list in ascending order:\n");
 
  for (c = 0; c <= 7- 1; c++) {
    printf("%d\n", array[c]);
  }
 
}
