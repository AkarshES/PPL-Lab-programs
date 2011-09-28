interface A
{
	public void display();
};
class B implements A
{
	public static void main(String [] args)
	{
		callback.display();
	}
	public void display()
	{
		System.out.println("Interface!");
	}
	static A callback;
}
