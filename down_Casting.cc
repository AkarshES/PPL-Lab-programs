#include<iostream>
using namespace std;
class abc
{
		int a,b,c;
		public:abc()
		{
			a = 2;b = 3;c = 4;
		}
		virtual void func1()
		{
				cout<<a<<b<<c<<endl;
		}
};
class def : public abc
{
		int d;
		public:def()		{d = 8;}		
		void func1()
		{cout<<d;}
		void func2()
		{cout<<"func2";}
};
int main()
{
		abc a;
		def d;
		abc *aa;
		def *dd;
		a.func1();
		d.func1();
		aa = &d;
		dd = dynamic_cast<def *> (aa);
		aa->func1();
		dd->func2();
}
