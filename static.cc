#include <cstdio>
static int a;//initalized to 0
//scope of static variales is the same as all the other variables but the lifetime is the program lifetime
int main()
{
	void print();	
	printf("a = %d\n",a);
	a = 10;
	print();
	print();
	printf("a = %d\n",a);
	return 0;	
}
void print()
{
	void print2(int);
	void print3(int*);
	static int b = 20;	
	a = 15;	//local overshadows global variable with the same name
	printf("a = %d	b = %d\n",a++,b++);
	print2(b);
	print3(&b);
}

void print2(int t)
{	
	printf("In print2 : b = %d\n",t);
}

void print3(int* t2)
{
	printf("In print3 : b = %d\n",*t2);
}
