import java.util.*;
import java.io.*;

class pair
{
	int data;
	int lis;
	public pair(int data,int lis)
	{
		this.data=data;
		this.lis=lis;
	}

}

public class lis_pair
{
	public static int findlis(int arr[])
	{
		int len=arr.length;
	pair li[]=new pair[len];
	int i,j;

	for(i=0;i<len;i++)
	{
		li[i]=new pair(arr[i],1);
	}

	for(i=1;i<len;i++)
	{
		for(j=0;j<i;j++)
		{
			if(arr[i]>arr[j] && li[i].lis<li[j].lis+1)
			{
				li[i].lis=li[j].lis+1;
			}
		}
	}

	for(i=0;i<len-1;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(li[i].lis==li[j].lis)
			{
				li[j].lis=-1;
			}
		}
	}

for(pair x:li)
	{
if(x.lis!=-1)
{
	System.out.println(+x.data+" "+x.lis);
}
}

int max=0;
for(i=0;i<len;i++)
{
	if(max<li[i].lis)
	{
		max=li[i].lis;
	}

}
return max;


}
public static void main (String[] args) {
        int arr[] ={10, 22, 9, 33, 21, 50, 41, 60,12,87,67,91,112,40,234,34,555};
        System.out.println(findlis(arr));
	}
}