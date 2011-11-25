class A
{
	int a;
	public void func1()
	{
		System.out.println("Hello");
	}
}
class B extends A
{
	@Override
	public void func1()
	{
		System.out.println("Hai");
	}
	
}
class ExtendinJava
{
	public static void main(String []args)
	{
		final int b = 100;
		System.out.println(b);
		B obj = new B();
		//b = 2000;//Not possible
		System.out.println(b);
		obj.func1();
	}
}
