#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
	struct node* prev;
};
struct node *head = NULL;

struct node* createNode(int v){
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = v;
	newnode->next = NULL;
	newnode->prev = NULL;
	return newnode;
}
void printlist(struct node* t){
		printf("Linked List Elements:\n");
	while(t){
		printf("%d    ",t->data);
		t = t->next;
	}
}
void insertbeg(int v){
	struct node* n = createNode(v);
	if(head == NULL){
		n->prev = NULL;
		head =n;
		return;
	}
	struct node* t=head;
	while(t->next != NULL){
		t = t->next;
	}
	t->next = n;
	n->prev = t;
		
}

void insertlast(int v){
	struct node* n = createNode(v);

	

}


int main(){
	struct node *n1 = createNode(5);
	struct node *n2 = createNode(15);
	n1->next = n2;
	n2->prev = n1;
	head = n1;
	printlist(head);
	insertbeg(12);
	insertbeg(24);
	printlist(head);
	return 0;	
}
