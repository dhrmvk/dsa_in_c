#include<stdio.h>
#define SIZE 7
int TOP = -1;
char Stack[SIZE];

int isEmpty(){
	return TOP == -1;
}

int isFull(){
	return TOP == SIZE - 1;
}

void PUSH(char data){
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
	char pval = Stack[TOP];
	TOP = TOP - 1;
	return pval;
	}

}

int PEEK(){
	return Stack[TOP];
}


