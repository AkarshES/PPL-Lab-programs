class InnerClass
{
	static InnerClass1 callback = new InnerClass1();
	public static void main(String [] args)
	{
		callback.add(5,10);
		InnerClass2.add(10,15);
	}
	class InnerClass1
	{
		public void add(int a,int b)
		{
			System.out.println(a+b);
		}
	}
	static class InnerClass2
	{
		public static void add(int a,int b)
		{
			System.out.println(a+b);
		}
	}
}
