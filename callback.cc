#include<iostream>
using namespace std;
void cbfunc()
{
	cout<<"Called"<<endl;
}
int main()
{
	int temp(void*);
	void (*callback)(void);
	callback = &cbfunc;
	callback();
}

