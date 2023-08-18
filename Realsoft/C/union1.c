#include <stdio.h>

union pqr
{
    int a;
    float b;
    char c;
};

int main()
{
	union pqr p;
	p.a = 10;
	printf("\n%d", p.a);
	p.b = 9.2;
	printf("\n%0.1f", p.b);
	p.c = 'A';
	printf("\n%c", p.c);
	return 0;
}