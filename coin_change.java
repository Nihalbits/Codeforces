import java.util.*;
import java.io.*;
import java.util.ArrayList;

class coin_change
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);

		System.out.println("Enter value of N");
		int N=sc.nextInt();


		System.out.println("Enter size s");
		int s=sc.nextInt();

		int i,j;

		int coins[]=new int[s];

		System.out.println("Enter array of size s");

		for(i=0;i<s;i++)
		{
			coins[i]=sc.nextInt();
		}

		coin_change obj=new coin_change();
		int n=coins.length;
		ArrayList<Integer> draft=new ArrayList<Integer>(n);
		//ArrayList<Arraylist<Integer> > solution=new ArrayList<Arraylist<Integer> >();
		System.out.println("Total possible answers are= "+obj.iterate(coins,n-1,N,draft));
		//System.out.println(solution);
    }

 public int iterate(int []coins,int n,int sum,ArrayList<Integer> draft)
	{
		
		int ans=0;

		if(sum==0)
		{
			System.out.println(draft);

			return 1;

//			draft.remove(coins[n]);

		}
		if(n<0 || sum<0)
			return 0;

		draft.add(coins[n]);

		int ans1=iterate(coins,n,sum-coins[n],draft);

		draft.remove(new Integer(coins[n]));

		int ans2=iterate(coins,n-1,sum,draft);

		return ans1+ans2;

	}
}
