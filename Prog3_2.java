public class Prog3_2
{
		public static void main(String [] args)
		{
			char [] copyFrom = {'a','e','i','o','u'};
			char [] copyTo = new char[copyFrom.length];
			System.arraycopy(copyFrom,2,copyTo,0,copyFrom.length-2);
			System.out.println(new String(copyTo));
		}
}
