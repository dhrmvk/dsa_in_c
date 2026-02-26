#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node *left;
	struct Node *right;
};

struct Node* root = NULL;

struct Node* createNode(int v){
	struct Node* n = (struct Node*)malloc(sizeof(struct Node));
	n->data = v;
	n->left = NULL;
	n->right = NULL;
	return n;
}

void inorder(struct Node* t){
		if(t==NULL)
			return;
		inorder(t->left);
		printf("%d 	",t->data);
		inorder(t->right);	
}

void preorder(struct Node* t){
		if(t==NULL)
			return;
		printf("%d 	",t->data);
		preorder(t->left);
		preorder(t->right);	
}

void postorder(struct Node* t){
		if(t==NULL)
			return;
		postorder(t->left);
		postorder(t->right);
		printf("%d 	",t->data);	
}

int main(){
	struct Node* n1 = createNode(10);
	root = n1;
	
	struct Node* n2 = createNode(15);
	root->left = n2;
	
	struct Node* n3 = createNode(20);
	root->right = n3;
	
	struct Node* n4 = createNode(35);
	root->right->left = n4;
	
	struct Node* n5 = createNode(30);
	root->right->right = n5;
	
	struct Node* n6 = createNode(40);
	root->left->left = n6;
	
	printf("Inorder Traversal\n");
	inorder(root);
	
	printf("\npreorder Traversal\n");
	preorder(root);
	
	printf("\npostorder Traversal\n");
	postorder(root);
	
	return 0;
}
