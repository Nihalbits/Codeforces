import java.util.*;

class min_cost_path
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);

		System.out.println("Enter m and n");
		int m=sc.nextInt();
		int n=sc.nextInt();

		System.out.println("Enter array of size m*n");

		int i,j;

		int cost[][]=new int[m][n];

		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
		{
			cost[i][j]=sc.nextInt();
		}
	    }

	    int tc[][]=new int[m+1][n+1];

	    tc[0][0]=0;
	    for(i=1;i<=m;i++)
	    {
	    	tc[i][0]=cost[i-1][0];
	    }
	    for(j=1;j<=n;j++)
	    {
	    	tc[0][j]=cost[0][j-1];
	    }

	    for(i=1;i<=m;i++)
	    {
	    	for(j=1;j<=n;j++)
	    	{
	    		tc[i][j]=cost[i-1][j-1]+Math.min(tc[i-1][j-1],Math.min(tc[i][j-1],tc[i-1][j]));
	    	}
	    }

	    System.out.println("Total cost to reach ("+m+","+n+") from (0,0) is "+tc[m][n]);


	/*    System.out.println("Now printing minimum cost path followed");

	    ArrayList<Integer> path=new ArrayList<Integer>();

	    path.add(cost[m-1][n-1]);

i=m;
j=n;
	 while(i>1 && j>1)
	 {
	    		int include;
	    		if(tc[i-1][j-1]<tc[i][j-1] && tc[i-1][j-1]<tc[i-1][j])
	    		{
	    			include=cost[i-2][j-2];
	    			i=i-1;
	    			j=j-1;
	    		}
	    		else if(tc[i][j-1]<tc[i-1][j-1] && tc[i][j-1]<tc[i-1][j])
	    		{
	    			include=cost[i-1][j-2];
	    			i=i;
	    			j=j-1;
	    		}
	    		else
	    		{
	    			include=cost[i-2][j-1];
	    			i=i-1;
	    			j=j;
	    		}
	    		path.add(include);

	   }
	   path.add(cost[0][0]);
	   Collections.reverse(path);
	   System.out.println(path);*/
}
}
