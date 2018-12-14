/*P4.c*/
/*Lucas Eduardo Oliveira Rosa*/
/*11811EEL016*/

#include <stdio.h>

int funcao(int i, int j)
{
  if(i==0)
  {
  	return j+1;
  }
  if(j==0 && i>0)
  {
  	funcao(i-1,1);
  }
  if(j>0 && i>0)
  {
  	funcao(i-1,funcao(i,j-1));
  }
}

int main()
{
  int i,j;
  scanf("%i %i",&i,&j);
  printf("%i",funcao(i,j));
}