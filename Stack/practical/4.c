/*d.To check for balance parentheses in an expression entered by user*/
#include <stdio.h>
#include <string.h>

int top = -1;
char s[100];

void push(char x)
	{
	top++;
	s[top] = x;
	}

void pop(char y)
	{
	if(y==')'){
	if(s[top]=='('){
	top=top-1;
	}
	}
	
else if(y=='}')
	{
	if(s[top]=='{')
	{
	top = top-1;
	}
	}
	
else if(y==']')
	{
	if(s[top]=='['){
	top = top-1;
	}
	}
	
else{
	return ;
	}	
	}

void Print(){
	int i;
	if(top==-1){
		printf("\nThey are balanced parentheses");
	}
	else{
		printf("\nFALSE! not balanced Expression because\n");

    for(i=0;i<=top;i++){
        if(s[top]=='('){
            printf("You should end with: ')' ");
           }
        else if(s[top]=='{'){
            printf("You should end with: '}' ");
        }
        else if(s[top]=='['){
            printf("You should end with: ']'");
        }
        else{
            printf("INVALID expression here!");
        }
        return;
    }

}

}

void balanced_parentheses(){
int i,l;
char exp[100],x,y;
printf("Enter the exp:");
scanf("%s",exp);
l = strlen(exp);

for(i = 0;i<l;i++){		
	if(exp[i]=='(' || exp[i]=='{' || exp[i]=='['){
		x = exp[i];
		push(exp[i]);
		}
	else if(exp[i]==')' || exp[i]=='}' || exp[i]==']'){
		y = exp[i];
		pop(y);
		}
		}
}

int main(){
	balanced_parentheses();
	Print();
}
