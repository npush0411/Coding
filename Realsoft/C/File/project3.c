#include <stdio.h>
#include "project.h"



int main()
{
    int opt;

    fs = fopen("STU.dat", "r + b");
    fc = fopen("CTY.dat", "r + b"); //r+b reading and writing boths
    ft = fopen("TRD.dat", "r + b");

    if(fs == NULL)
    {
        fs = fopen("STU.dat", "wb");
        fclose(fs);
        fs = fopen("STU.dat", "r + b");
    }
    if(fc == NULL)
    {
        fc = fopen("CTY.dat", "wb");
        fclose(fc);
        fc = fopen("CTY.dat", "r + b");
    }
    if(ft == NULL)
    {
        ft = fopen("TRD.dat", "wb");
        fclose(ft);
        ft = fopen("TRD.dat", "r + b");
    }
    printf("\nStudent record System");
    while(1)
    {
        printf("\n1. Student Menue\n2. Trade Menue\n3. City Menue\n4. Exit\nOption : ");
        scanf("%d", &opt);
        if(opt > 3)
            break;
        switch (opt)
        {
            case 1:
                smenue(); break;
            case 2:
                tmenue(); break;
            case 3:
                cmenue(); break;
        }
    }
    return 0;
}
