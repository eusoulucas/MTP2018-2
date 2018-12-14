/*P3.c*/
/*Lucas Eduardo Oliveira Rosa*/
/*11811EEL016*/

#include <stdio.h>

int main ()
{
	char val[25];
	int j, k = 0;
	scanf("%s", val);
	for (j = 0; val[j] != '\0'; j++)
		if (val[j] >= 48 && val[j] <= 57)
		{
			k = k*10 + (val[j] - '0');
		}
	printf("%d", k);
	return 0;
}