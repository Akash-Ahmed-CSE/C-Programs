
//15
//14 13
//12 11 10
//9 8 7 6
//5 4 3 2 1

#include <stdio.h>
int main() {
   int rows=5, i, j=15, c;


   for (i = 1; i <= rows+1; i++) {
      for (c=1; c < i; j--,c++) {
         printf("%d ", j);
      }
      printf("\n");
   }
   return 0;
}
