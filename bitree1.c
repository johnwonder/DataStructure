#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* left;
	Node* right;
}

Node* CreateBinaryTree()
{
	int data;
	cin>>data;
	Node* root;
	if(data == 0){
		return NULL;
	}
	else{
		root = new Node();
		root->data = data;
		root->left = CreateBinaryTree();
		root->right = CreateBinaryTree();
	}

	return root;
}

void PreOrder(Node* root){
		if(root == NULL)
			return;

		cout << root->data<<",";
		PreOrder(root->left);
		PreOrder(root->right);
}

void InOrder(Node* root){
		if(root == NULL)
			return;

		InOrder(root->left);
		cout<<root->data<<",";
		InOrder(root->right);
}

void AfterOrder(Node* root){
	if(root == NULL)
		return;

	AfterOrder(root->left);
	AfterOrder(root->right);
	cout<<root->data<<",";

}

int main(int argc,char* argv[])
{
		Node* Root;
		cout<<" === 二叉树"<<endl;
		cout<<"先序递归创建二叉树"<<endl;
		Root = CreateBinaryTree();
		cout<<"先序遍历二叉树"<<endl;
		PreOrder(Root);
		cout<<endl;
		cout<<"中序遍历二叉树"<<endl;
		InOrder(Root);
		cout<<endl;
		cout<<"后序遍历二叉树"<<endl;
		AfterOrder(Root);
		cout<<endl;
		system("pause");
		return 0;
}