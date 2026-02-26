#include"stack.h"
#include <ctype.h>

int main(){
	char exp[20];
	printf("enter the expression\n");
	scanf("%s",&exp);
	printf("%s",exp);
	
	for(int i = 0;exp[i]!='\0';i++){
		if(isdigit(exp[i])){
			PUSH(exp[i]-'0');
			
		}
		else{
			int op2 = POP();
			int op1 = POP();
			switch(exp[i]){
				case '+':
					PUSH(op1+op2);
					break;
				case '-':
					PUSH(op1-op2);
					break;
				case '*':
					PUSH(op1*op2);
					break;
				case '/':
					PUSH(op1/op2);
					break;
				default:
					printf("not valid operations");
					break;
			}
		}
	}
	printf("Result: %d",POP());
	return 0;
}
