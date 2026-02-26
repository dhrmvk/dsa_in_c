#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* next;
};

struct Node *TOP = NULL;

struct Node* CreateNode(int value){
	struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
	newnode->data = value;
	newnode->next =  NULL;
	return newnode;
}
void PUSH_ll(int data){
	struct Node* s_node = CreateNode(data);
	s_node->next =TOP;
	TOP = s_node;	
}
int POP_ll(){
	if(TOP==NULL){
		printf("Under flow\n");
		return -1;
	}
	struct Node* temp = TOP;
	int val = temp->data;
	TOP = temp->next;
	free(temp);
	return val;
}



int main()
{
	
	PUSH_ll(5);
	PUSH_ll(10);
	PUSH_ll(15);
	PUSH_ll(20);
	printf("%d",POP_ll());
	printf("%d",POP_ll());
	printf("%d",POP_ll());
	printf("%d",POP_ll());
	printf("%d",POP_ll());
	PUSH_ll(25);
	PUSH_ll(55);
	printf("%d",POP_ll());
	
	return 0;
}
