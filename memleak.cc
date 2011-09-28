#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main()
{
	mtrace();
	int* a = (int*)malloc(sizeof(int));
	*a = 5;
	return 0;
	muntrace();
}
