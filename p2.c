/*P2.c*/
/*Lucas Eduardo*/
/*11811EEL016*/

#include<stdio.h>

int ascdec(char letra) {
    if (letra >= '0' && letra <= '9') {
        return letra - '0';
    }
    if (letra >= 'A' && letra <= 'F') {
        return letra - 'A' + 10;
    }
    if (letra >= 'a' && letra <= 'f') {
        return letra - 'a' + 10;
    }
}

int elevar(int base, int exp) {
    int i, aux;

    aux = base;

    if (exp == 0) {
        base = 1;
    } else {
        for (i = 1; i < exp; i++) {
            base = aux * base;
        }
    }
    return base;
}

int basedec(char bits[], int base) {
    int tamanho = 0;

    for (; bits[tamanho]; tamanho++);
    int i = tamanho - 1;
    int exp = 0;
    int dec = 0;

    for (; i >= 0; i--) {
        dec += ascdec(bits[i]) * elevar(base, exp++);
    }
    return dec;
}

int decasc(int letra) {
    if (letra >= 0 && letra <= 9)
    {
        return letra + '0';
    }
    if (letra >= 10 && letra <= 15)
    {
        return letra + 'A' - 10;
    }
}

void decbase(int dec, int bits, char strParaArmazenar[], int base) {
    strParaArmazenar[bits] = '\0';
    int i = bits - 1;

        for (; i >= 0; i--)
        {
            strParaArmazenar[i] = decasc(dec % base);
            dec = dec / base;
        }


}

void decbin(int dec, int qnt) {
    int i;
    int bin[256];

    for (i = 0; i < qnt * 4; i++) {
        bin[i] = dec % 2;
        dec = dec / 2;
        printf("%d", bin[i]);
    }
    printf("\n");

    for (; i >= 0; --i) {
        printf("%d", bin[i]);
    }
}

int main() {
    char bits[256];
    int op = 0, dec = 0, tamanho = 0, *p;

        printf("1. Binario para Decimal\n2. Binario para Hexadecimal\n3. Hexadecimal para Decimal\n4. Hexadecimal para Binario");
        printf("\n5. Decimal para Binario\n6. Decimal para Hexadecimal\n7. Octal para Decimal\n8. Sair do Programa\n\nDigite sua opcao: ");

        scanf("%d", &op);

        switch (op) {
            case 1:                                         // binario >>>>> decimal
                printf("\nDigite seus bits: \n");
                scanf("%s", bits);                          //td ok
                printf("%d", basedec(bits, 2));
                break;
            case 2:                                         //binario >>>> hexa
                printf("\nDigite seus bits: \n");
                scanf("%s", bits);
                dec = basedec(bits, 2);
                decbase(dec, 10, bits, 16);
                printf("%s", bits);
                break;
            case 3:                                         //hexa >>>>>>> decimal
                printf("\nDigite seu hexadecimal: \n");
                scanf("%s", bits);                          //td ok
                printf("%d", basedec(bits, 16));
                break;
            case 4:                                         // hexa >>>>>> binario
                printf("\nDigite seu hexadecimal: \n");
                scanf("%s", bits);
                dec = basedec(bits, 16);                   //td ok
                decbase(dec, 15, bits, 2);
                printf("%s", bits);
                break;
            case 5:                                         // decimal >> binario
                printf("\nDigite seu decimal: \n");
                scanf("%d", &dec);                          //td ok
                decbase(dec, 10, bits, 2);
                printf("%s", bits);
                break;
            case 6:                                         // decimal >>>>> hexa
                printf("\nDigite seu decimal: \n");
                scanf("%d", &dec);                          //td ok
                decbase(dec, 10 , bits, 16);
                printf("%s", bits);
                break;
            case 7:                                         // decimal >>>>>> octal
                printf("\nDigite seu octal: \n");
                scanf("%s", bits);                          //td ok
                printf("%d", basedec(bits, 8));
                break;
            default:
                    printf("\nOpcao invalida.\n");
        }
    return 0;
}