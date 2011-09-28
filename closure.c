#include<stdio.h>

int x=5;

void call_a_block(void(*blockptr)(int))
{
	blockptr(4);
}

void function1(int y)
{
			printf("%d\n",x+y);
}

void function2(int y)
{
	printf("%d\n",y*y);
}

int main()
{
		printf("Demonstration of closure in C\n");
		call_a_block(function1);
		call_a_block(function2);
		return 0;
}
