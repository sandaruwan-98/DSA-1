/*To check for balance parentheses in an expression entered by user*/
#include<stdio.h>
char stack[6];
int max=6,top=-1;

//function to push the valus to stack
void push(char val){
	if(top>=max-1){
		printf("can't add any more vales- OVERFLOW");
	}
	else{
		top++;
		stack[top]=val;
	}
}

//function to pop the valus from stack
char pop(){
	if(top<=-1){
		printf("No opening brackets");
	}
	else{
		char item=stack[top];
		top--;
		return item;
	}
}

//Main function
int main(){
	char exp[6];
	printf("Enter expression with five characters:");
	scanf("%S",&exp);
	
	int i,count=0;
	char value;
	
	for(i=0;i<=5;i++){
		if(exp[i]=='('||exp[i]=='{'||exp[i]=='['){
			push(exp[i]);//push the bracket in to push function
		}
		else if(exp[i]==')'||exp[i]=='}'||exp[i]==']'){
			value=pop();//if it is a closing bracket pop last bracket from the stack to compare
			
			if((value=='(' && exp[i]==')')||(value=='{' && exp[i]=='}')||(value=='[' && exp[i]==']')){
				count=1;//to check () {} [] types of situations
			}
			else{
				break;//early exit from the loop if one pair of brackets not balanced {} like this
			}
		}
	}
	if (count==1){
		printf("Balanced expression");
	} 
	if(value==0||count==0){//nothing to pop means no closing brackets
		printf("Unbalanced expression");	
	}
return 0;
}
