/*P1.c*/
/*Lucas Eduardo*/
/*11811EEL016*/
#include <stdio.h>

int main()
{
    int estado = 0,i = 0;
    char bits[236];

        scanf("%s", bits);

    while(bits[i] != '\0')
    {
        if(estado == 0 && bits[i] == '0')
        {
            estado = 0;
        }
        else if(estado == 0 && bits[i] == '1')
        {
            estado = 1;
        }
        else if(estado == 1 && bits[i] == '0')
        {
            estado = 2;
        }
        else if(estado == 1 && bits[i] == '1')
        {
            estado = 0;
        }
        else if(estado == 2 && bits[i] == '0')
        {
            estado = 1;
        }
        else if(estado == 2 && bits[i] == '1')
        {
            estado = 2;
        }
        i++;
    }
    if(estado == 0)
    {
        printf("\nEh multiplo de 3.\n%s",bits);
    }
    else
    {
        printf("\nNao eh multiplo de 3.\n%s",bits) ;
    }

    return 0;
    }
