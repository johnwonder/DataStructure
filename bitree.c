struct node{
	int data;
	struct node* left;
	struct node* right;
}

void visit(int data){
	printf("%d ",data);
}

int indata(){
	int data;
	scanf("%d",&data);
	return data;
}

struct node* CreateBiTree(){
	char x;
	struct node* t;
	x = indata();
	if(x == '  '){
		return NULL;
	}
	else{
		t =(struct node*)malloc(sizeof(struct node));
		t->data = x;
		t->left = CreateBiTree();
		t->right =CreateBiTree();
	}

	return t;
}

/*先序遍历二叉树*/
void preOrder(struct node* root){
	
	 if(root == NULL)
		 return;

	 visit(root->data);
	 preOrder(root->left);
	 preOrder(root->right);
}

/*中序创建二叉树*/
struct node* CreateBiTree(){

	char x;//x 为根节点
	struct node* t;
	x = indata();
	if(x == '  ')
		return NULL;
	else{
	
		 t = (struct node*)malloc(sizeof(struct node));
		 t->left = CreateBiTree();
		 t->data = x;
		 t->right = CreateBiTree();
	}
	return t;
}

/*中序遍历二叉树*/
void inOrder(struct node* root){

	if(root == NULL){
		return;
	}

	inOrder(root->left);
	visit(root->data);
	inOrder(root->right);
}

/*后序创建二叉树*/

struct node* CreateBiTree()
{
	 char x;
	 struct node* t;
	 x = indata();
	 if(x == '  ')
		 return NULL;
	 else
	 {
		t = (struct node*)malloc(sizeof(struct node));
		t->left = CreateBiTree();
		t->right = CreateBiTree();
		t->data =x;
	 }
	 return t;
}

/*后序遍历二叉树*/

void inOrder(struct node* root){
	if(root == NULL)
		return;
	inOrder(root->left);
	inOrder(root->right);
	visit(root->data);
}