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

/*�������������*/
void preOrder(struct node* root){
	
	 if(root == NULL)
		 return;

	 visit(root->data);
	 preOrder(root->left);
	 preOrder(root->right);
}

/*���򴴽�������*/
struct node* CreateBiTree(){

	char x;//x Ϊ���ڵ�
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

/*�������������*/
void inOrder(struct node* root){

	if(root == NULL){
		return;
	}

	inOrder(root->left);
	visit(root->data);
	inOrder(root->right);
}

/*���򴴽�������*/

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

/*�������������*/

void inOrder(struct node* root){
	if(root == NULL)
		return;
	inOrder(root->left);
	inOrder(root->right);
	visit(root->data);
}