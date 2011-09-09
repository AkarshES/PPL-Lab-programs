#include<iostream>
using namespace std;
class call
{
	private: int a;
		 int b;
	public: call();
		call(int,int);
		void print();
				
};
call::call()
{
	a = 5;
	b = 10;		
}
call::call(int a1,int b1 = 0)
{
	a = a1;b = b1;
}

void call::print()
{
	cout<<a<<"	"<<b<<endl;
}
int main()
{
	call c1;
	c1.print();
	call c2(12);
	c2.print();
}
