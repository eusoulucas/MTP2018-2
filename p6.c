/* P6.c */
/* Lucas Eduardo Oliveira Rosa*/
/* 11811EEL016 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14159265359

typedef struct {
  double x;
  double y;
}Coord;

int main()
{
   int qnt, i;
   Coord *xy;

   scanf("%d", &qnt);
   getchar();

   xy = (Coord *) malloc(qnt*sizeof(Coord));

   printf("%i retorna ",qnt);

   for(i = 0; i < qnt; i++)
   {
     xy->x= cos(i*2*pi/(qnt));
     xy->y= sin(i*2*pi/qnt);
     printf("(%.3f, %.3f) ", xy->x, xy->y);
   }
   free(xy);
   return 0;
}