/*P3.c*/
/*Lucas Eduardo*/
/*11811EEL016*/

#include <stdio.h>

int eh_numero(char *numerais, int indice)
{
    if(numerais[indice] < '0' && numerais[indice] > '9')
        return 0;
    else return 1;
}

int elevar_dez(int i)
{
    int dez = 1, j = 0;
    if(i == 0)
    {
    	return 1;
	}
	else
	{
		for (j = 0; j < i ; j++)
    		{
        		dez = dez * 10;
    		}
			return dez;	
	}
}

int main()
{
    char string[256];
    int resultado, soma = 0;
    int j = 0, i = 0;

    scanf("%s", string);

    for (; string[j] ; ++j);
	
    for (i = 0; string[i] ; i++)
    {
        if(eh_numero(string, i))
        {
            resultado = string[i] - '0';
            resultado = resultado * elevar_dez(j-1);
            soma += resultado;
            j--;
        }
    }
    printf("%d", soma);
}