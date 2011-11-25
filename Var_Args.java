public class Var_Args
{
		public static void main(String [] args)
		{
			test(215,"India","Delhi");
			test(417,"United States","New York","California");
		}
		public static void test(int Some,String...args)
		{
			System.out.print(" "+Some);
			for (String arg:args)
			{
				System.out.print(","+arg);
			}
			System.out.println();
		}
}
