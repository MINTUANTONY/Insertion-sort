#include <stdio.h>
int c,d,t,n;
int array[20];
int sort(int *array)
{
for (c = 1 ; c <= n - 1; c++) {
    d = c;
 
    while ( d > 0 && array[d] < array[d-1]) {
      t          = array[d];
      array[d]   = array[d-1];
      array[d-1] = t;
 
      d--;
    }
  }
}
int read()
{
printf("enter the no. of elements");
scanf("%d",&n);
printf("enter elements");
for(c=0;c<n;c++)
{
scanf("%d",&array[c]);
}
}
int main()
{
  //int  array[7]={4,23,43,38,15,10,30};
  read();
  sort(array);
  printf("Sorted list in ascending order:\n");
 
  for (c = 0; c <=n- 1; c++) {
    printf("%d\n", array[c]);
  }
}
