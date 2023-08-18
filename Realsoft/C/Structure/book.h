#include <stdio.h>

struct book
{
    int bno;
    char bnm[50];
    int price;
};
void input(struct book *q)
{
    printf("\nEnter Book No : ");
    scanf("%d", &q->bno);
    printf("\nEnter Book Name : ");
    scanf("%s", q->bnm);
    printf("\nEnter Book Price : ");
    scanf("%d", &q->price);
}
void display(struct book q)
{
        printf("\nBook No : %d\n\nBook Name : %s\nBook Price : %d\n\n", q.bno, q.bnm, q.price);

}