public class ll
{
	Node head;

	static class Node
	{
		int data;
		Node next;
		Node(int data)
		{
			this.data=data;
			next=null;
		}

	}

	void print()
	{
		Node n=head;
		while(n!=null)
		{
			System.out.print(n.data+"->");
			n=n.next;
		}
		System.out.println("null");
	}

	public static void main(String args[])
	{
		ll obj=new ll();
		
		obj.head=new Node(1);
		Node second=new Node(2);
		Node third=new Node(3);
		Node fourth =new Node(4);

		obj.head.next=second;
		second.next=third;
		third.next=fourth;
		obj.print();

}
}

