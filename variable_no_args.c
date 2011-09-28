#include<stdlib.h>
#include<stdarg.h>
#include<stdio.h>
int maxof(int,...);
void f(void);
int main()
{
	f();
	exit(EXIT_SUCCESS);
	return 0;
}
int maxof(int n_args,...)
{
	register int i;
	int max,a;
	va_list ap;
	va_start(ap,n_args);
	max = va_arg(ap,int);
	for(i=1;i<n_args;i++)
	{
		if((a=va_arg(ap,int))>max)
			max = a;
	}
	va_end(ap);
	return max;
}
void f(void)
{
	int j[10] = {50,60,70,80,10,20,30,40,90,100};
	printf("%d\n",maxof(10,j[0],j[1],j[2],j[3],j[4],j[5],j[6],j[7],j[8],j[9],j[10]));
}
