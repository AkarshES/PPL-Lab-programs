class A
{
	int a;
	public A()
	{
		a = 5;
	}
	public void disp()
	{
		System.out.println(a);
	}
}

class B extends A
{
	int b;
	public B()
	{
		super();
		b = 10;
	}
	public void disp()
	{
		System.out.println(b);
	}
	
}
public class Downcasting
{
	public static void main(String []args)
	{
		A a = new A();
		B b = new B();
		b = (B)a;
		a.disp();
		b.disp();
	}
}
