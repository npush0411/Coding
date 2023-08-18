#include <stdio.h>
#include <conio.h>

void main(){
    int no;
    clrscr();
    printf("\nEnter No: ");
    scanf("%d", &no);
    printf("\nNo. %d is %s", no, ( no%2 == 0 ? "Even" : "Odd" ) );
    getch();
    return;
}