#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* next;
};

struct Node *front = NULL,*rear = NULL;

struct Node* CreateNode(int value){
	struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
	newnode->data = value;
	newnode->next =  NULL;
	return newnode;
}
void enqueue_ll(int data){
	struct Node *qnode = CreateNode(data);
	if(front == NULL && rear == NULL){
		front = rear = qnode;
	}
	else{
		rear->next = qnode;
		rear = qnode;
	}
	

}
int dequeue_ll(){
	struct Node *temp;
	if(front==NULL){
		printf("empty\n");
		return -1;
	}
	else{
		temp = front;
		int val = temp->data;
		front = front->next;
		if(front == NULL){
			rear = NULL;
		}
		free(temp);
		return val;
	}

}



int main()
{
	
	enqueue_ll(5);
	enqueue_ll(15);
	enqueue_ll(255);
	printf("%d",dequeue_ll());
	printf("%d",dequeue_ll());


	return 0;
}
