import java.util.*;

class Node
{
	int data;
	Node left,right;

	public Node(int x)
	{
		data=x;
		left=null;
		right=null;
	}

}

class BinaryTree
{
	static Node root;
	BinaryTree()
	{
		root=null;
	}

	static void inorder( Node node)
	{
		if(node==null)
			return;
		inorder(node.left);
		System.out.println(node.data);
		inorder(node.right);
	}

static 	void PreOrder( Node node)
	{
		if(node==null)
			return;
		
		System.out.println(node.data);
		PreOrder(node.left);
		PreOrder(node.right);
	}

static	void PostOrder( Node node)
	{
		if(node==null)
			return;
		
		
		PostOrder(node.left);
		PostOrder(node.right);
		System.out.println(node.data);
	}
	public static void main(String args[])
	{
		BinaryTree tree=new BinaryTree();
		tree.root=new Node(4);
		tree.root.left=new Node(2);
		tree.root.right=new Node(5);
		tree.root.left.left=new Node(1);
		tree.root.left.right=new Node(3);

		System.out.println("Inorder traversal");
		tree.inorder(root);

		System.out.println("PreOrder traversal");
		tree.PreOrder(root);

		System.out.println("PostOrder traversal");
		tree.PostOrder(root);
	}









	}

