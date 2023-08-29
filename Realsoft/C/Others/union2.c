#include <stdio.h>

union pqr
{
    int a;
    float b;
    char c;
};
struct abc
{
    union pqr var;
    char type;
}k[5];

int main()
{
    struct abc k[5];
    int i = 0;
    while(i < 5)
    {
        printf("\nMenue\ni - int\nf - float\nc - Char\nChoice : ");
        scanf("%c", &k[i].type);
        switch(k[i].type)
        {
            case 'i':
                printf("\nint Data : ");
                scanf("%d", &k[i].var.a);
                break;
            case 'f':
                printf("\nFloat Data : ");
                scanf("%f", &k[i].var.b);
                break;
            case 'c':
                printf("\nChar Data : ");
                scanf("%d", &k[i].var.c);
                break;
        }
        i++;
    }
    printf("\nData \n");
    for(i = 0; i < 5; i++)
        switch(k[i].type)
        {
            case 'i':
                printf("\nint Data : %d", k[i].var.a);
                break;
            case 'f':
                printf("\nFloat Data : %f", k[i].var.b);
                break;
            case 'c':
                printf("\nChar Data : %c", k[i].var.c);
                break;
        }
    return 0;
}