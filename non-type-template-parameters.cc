//non-type template
#include<iostream>
using namespace std;

template<class T,int N>
class myseq
{
	T memblock[N];
	public: void Setmember(int x,T value);
			T getmember(int x);
};

template <class T,int N>
void myseq<T,N>::Setmember(int x,T value)
{
	memblock[x] = value;
}
template <class T,int N>
T myseq<T,N>::getmember(int x)
{
	return memblock[x];
}

int main()
{
	myseq<int,5> myints;
	myseq<float,5> myfloats;
	myints.Setmember(0,100);
	myfloats.Setmember(3,3.1416);
	cout<<myints.getmember(0)<<endl;
	cout<<myfloats.getmember(3)<<endl;
	return 0;
}
