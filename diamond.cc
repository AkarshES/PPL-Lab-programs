#include<iostream>
using namespace std;
class A
{
		public:int idata;
		public:A()
		{idata = 10;}
};
class B:virtual public A
{};
class C:virtual public A
{};
class D:public B,public C
{
	public: 
	int getData()
	{
		return idata;
	}
};

int main()
{
		D *d = new D();
		cout<<d->getData();
}
