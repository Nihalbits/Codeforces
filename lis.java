import java.util.*;

class lis
{
	public static int n;
	lis(int n)
	{
		this.n=n;
	}

public static void main(String args[])
{

	lis obj=new lis(7);
	int n=lis.n;
	int arr[]=new int[n];
	
 	arr=input();	

    int i,j;

		//int ls[]=new int[n];
		
	/*	for(i=0;i<n;i++)
		{
		   ls[i]=1;
	    }*/
	   
	   ArrayList<ArrayList<Integer> >ls=new ArrayList<ArrayList<Integer> > (n);
	   ls.get(0).add(arr[0]);

	 
   for(i=1;i<n;i++)
   {
	for(j=0;j<i;j++)
	{
	 if(arr[i]>arr[j] && ls.get(i).size()<ls.get(j).size()+1)
	{
		ls.get(i)=ls.get(j);
	}
}
ls.get(i).add(arr[i]);	
   }

   int lis_value=ls.get(0).size();
   ArrayList<Integer> lis_display=new ArrayList<Integer>();

   for(i=1;i<ls.size();i++)
   {
   	if(lis_value<ls.get(i).size())
   	{
   		lis_value=ls.get(i).size();
   		lis_display=ls.get(i);
   	}
   }

System.out.println("LIS length= "+lis_value);

  
            for (j = 0; j < lis_display.size(); j++) { 
                System.out.print(lis_display.get(j) + " "); 
            } 
            System.out.println(); 

}

public static int [] input()
{
	    Scanner sc=new Scanner(System.in);
	

		int arr[]=new int[n];

		System.out.println("Enter array elements");


		int i,j;

		for(i=0;i<n;i++)
		{ 
			arr[i]=sc.nextInt();
		}

		return arr;
}


}