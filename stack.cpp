#include<stdio.h>
#define SIZE 7
int TOP = -1;
int Stack[SIZE];

int isEmpty(){
	return TOP == -1;
}

int isFull(){
	return TOP == SIZE - 1;
}

void PUSH(int data){
	if(isFull()){
		printf("overflow");
		return ;
	}
	else{
		Stack[++TOP] = data;
	}
	
}

int POP(){
	if(isEmpty()){
		printf("Underflow");
		return -1;
	}
	else{
	int pval = Stack[TOP];
	TOP = TOP - 1;
	return pval;
	}

}

int PEEK(){
	return Stack[TOP];
}

int main(){
	PUSH(10);
	PUSH(20);
	PUSH(30);
	printf("%d\n",POP());
	printf("%d\n",POP());
	printf("%d\n",isFull());
	printf("%d\n",POP());
	printf("%d\n",isFull());
	printf("%d\n",isEmpty());
	printf("%d\n",POP());
	return 0;
}
