#include <stdio.h>
#include "project.h"

int main()
{
    int opt;
    fc = fopen("CTY.dat", "r + b"); //r+b reading and writing both
    ft = fopen("TRD.dat", "r + b");
    if(fc == NULL)
    {
        fc = fopen("CTY.dat", "wb");
        fclose(fc);
        fc = fopen("CTY.dat", "r + b");
    }
    if(ft == NULL)
    {
        ft = fopen("TRD.dat", "wb");
        fclose(fc);
        ft = fopen("TRD.dat", "r + b");
    }
    while(1)
    {
        printf("\nStudent Record System\n1. Trade Menue\n2. City Menue\n3. Exit\n");
        scanf("%d", &opt);
        if(opt > 2)
            break;
        switch(opt)
        {
            case 1:
                tmenue();
                break;
            case 2:
                cmenue();
                break;
        }
    }
    fclose(fc);
    fclose(ft);
    return 0;
}