/*P6.c*/
/*Lucas Eduardo Oliveira Rosa*/
/*11811EEL016*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef	struct p
{
    float x;
    float y;
}Ponto;

Ponto * faz_ponto(int j)
{
	Ponto * p = (Ponto *) calloc(j,sizeof(Ponto));
	int i;
	for(i=0; i<j; i++)
    {
		p[i].x = cos(i*2.0*M_PI/(j-1));
		p[i].y = sin(i*2.0*M_PI/(j-1));
	}
	return p;
}

void mostrar(Ponto * pin, Ponto * pfin)
{
	if(pin < pfin)
    {
		printf("(%.3f, %.3f) ", pin->x, pin->y);
		mostrar(pin+1, pfin);
	}
}

int main()
{
	unsigned int j;
	Ponto * p;
	scanf("%d",&j);
	getchar();
	p = faz_ponto(j);
	mostrar(p, p+j);
	free(p);
	return 0;
}
