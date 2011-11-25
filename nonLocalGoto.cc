#include <stdio.h>
#include <setjmp.h>

jmp_buf Jump;
void A()
{
	if(setjmp(Jump) == 0)
		printf("A return point marked\n");
	else
		printf("Just returned from a long jump\n");
}

void B()
{
	longjmp(Jump,1);
	printf("BLock of the Code B\n");
}
int main()
{
	A();
	B();
	return 0;
}
