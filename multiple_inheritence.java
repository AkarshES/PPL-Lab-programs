/* Multiple inheritence in Java
 * */
interface A1
{
		void func1();
}
interface A2
{
		void func2();
}

class A implements A1,A2
{
		public void func1()
		{
				System.out.println("In func1() part of Interface A1");
		}
		public void func2()
		{
				System.out.println("In func2() part of Interface A2");
		}
}
class multiple_inheritence
{
	public static void main(String []args)
	{
		A obj = new A();
		obj.func1();
		obj.func2();
	}
}
