#include"charstack.h"
#include <ctype.h>
#define MAX 10

int checkIfOperand(char *ch){
	if(ch>='a'\\)
}
int precedence(char ch)   
{   
    switch (ch)   
    {   
    case '+':   
    case '-':   
        return 1;   
  
    case '*':   
    case '/':   
        return 2;   
  
    case '^':   
        return 3;   
    }   
    return -1;   
}


void convertInfixToPostfix(char* expression)   
{   
    int i, j = 0;
    char postfix[MAX];

    for (i = 0; expression[i]; ++i)   
    {   
        if (checkIfOperand(expression[i]))   
            postfix[j++] = expression[i];   
  
        else if (expression[i] == '(')   
            PUSH(expression[i]);   
  
        else if (expression[i] == ')')   
        {   
            while (!isEmpty() && PEEK() != '(')   
                postfix[j++] = POP();   
            if (!isEmpty() && PEEK() != '(')   
                return; // Invalid expression
            else  
                POP();   
        }  
        else   
        {   
            while (!isEmpty() && precedence(expression[i]) <= precedence(PEEK()))   
                postfix[j++] = POP();   
            PUSH(expression[i]);   
        }   
    }   
  
    while (!isEmpty())   
        postfix[j++] = POP();   
  
    postfix[j] = '\0';   // Null-terminate the postfix expression

    printf("Postfix Expression: %s\n", postfix);   
}


int main(){
	char exp[20];
	printf("enter the expression\n");
	scanf("%s",&exp);
	printf("%s",exp);
	convertInfixToPostfix(exp);

	return 0;
}
