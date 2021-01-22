#include <stdio.h>

/*
 *Name: tom and jerry
 *Program to expreiiment with hexadercimal
 *and pointers
 */

int main()
{
	int a = 0;
	int b = 5;
	int c = 0x2251;

	int *pA = &a;
	int *pB = &b;
	int *p;
	
	printf("a=%d, pA=%x, *pA=%d\n", a, (int)pA, *pA);
	printf("%d: %x\n", a, a);
	printf("%d: %x\n", b, b);
	printf("%d: %x\n", c, c);
	printf("%lx\n", (long int)&a);
	
	a = 47;
	printf("a=%d, pA=%x, *pA=%d\n", a, (int)pA, *pA);
	*pA = 99;
	printf("a=%d, pA=%x, *pA=%d\n", a, (int)pA, *pA);;
}
