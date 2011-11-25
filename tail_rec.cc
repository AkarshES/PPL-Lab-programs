#include<iostream>
using namespace std;

int factorial1(int n,int acc)
{
	if(n == 0) return acc;
	return factorial1(n - 1,n*acc);	
}

int factorial(int n)
{
		return factorial1(n,1);
}

int main()
{
		cout<<factorial(5)<<endl;
}

