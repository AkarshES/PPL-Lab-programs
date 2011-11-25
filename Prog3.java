public class Prog3
{
	public static void main(String [] args)
	{
		int a[] = {1,2,3,4,5};
		int b[] = new int[a.length];
		System.out.print("A: ");
		for (int num:a)
			System.out.print(num+" ");
		for (int i=0;i<a.length;i++)
			b[i] = a[i];
		System.out.println();
		System.out.print("B: ");
		for (int num:b)
			System.out.print(num+" ");
		System.out.println();
	}
}
