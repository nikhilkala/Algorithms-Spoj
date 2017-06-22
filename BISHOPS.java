/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.*;
/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BigInteger str;
		BigInteger zer=new BigInteger("1");
		Scanner read = new Scanner(System.in);
		while(read.hasNextBigInteger())
		{
			str=read.nextBigInteger();
		//	BigInteger n= new BigInteger(str);
			BigInteger ans=str.multiply(new BigInteger("2")).subtract(new BigInteger("2"));
			if (str.equals(zer))
			System.out.println("1");
			else
			System.out.println(ans);
			
		}
	}
}
