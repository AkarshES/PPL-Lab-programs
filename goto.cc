/*Examine goto statement
 * Scope of goto in 'c'
 * Jump into/out of block
 * non-local goto
 * */
#include <iostream>
#include <cmath>
int prog1()//Scope of goto
{
	using namespace std;
	tryagain:
		cout<<"Enter a non negative number ";
		double dx;
		cin>>dx;
		if(dx < 0.0)
			goto tryagain;
		cout<<"The sqrt of "<<dx<<" is "<<sqrt(dx)<<endl;
}

int prog2()//Goto blocks
{
	using namespace std;
	int x = 5;
	goto label1;
	{
		cout<<x<<endl;
		//test();
		label1:	
			x = 10;
			cout<<x<<endl;
		goto label2;
	}
	label2:
	x = 15;
	cout<<x<<endl;
}

int main()
{
	using namespace std;
	prog1();
	prog2();
}
