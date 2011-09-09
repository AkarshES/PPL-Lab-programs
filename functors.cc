#include<iostream>
using namespace std;
class Area
{
	private:int a,b;
	public:	Area();
		Area(int,int);
		void operator()();
		void operator()(int);

};
Area::Area()
{
	a = 0;
	b = 1;
}

void Area::operator()()
{
	cout<<"Functor"<<endl;
}

void Area::operator()(int a)
{
	cout<<"Functor with One Parameter:a = "<<a<<endl;
}

int main()
{
	Area A;
	A();
	A(5);
}
