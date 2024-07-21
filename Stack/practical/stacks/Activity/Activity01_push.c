 //Activity-01 push eliments to a stack(stack size is 4 in this code "MAX=4")
 #include<stdio.h>
 
 int main(){
 	int MAX=4;
 	int TOP=-1;
 	int STACK[3];
 	int VALUE;
 	char op;
 	
 	printf("Do you want to Push a number in to stack(Y/N)?:");
	scanf(" %c",&op);
 	while(op=='Y')
	 {
 		if(TOP>=MAX-1)
		 	{
 			printf("Stack Overflow");
 			break;
	 		 }
		else
		{
		printf("Enter A value to add(push) in to the stack: ");
		TOP=TOP+1;
		scanf("%d",&STACK[TOP]);
		}
 	 }
 	
 return 0;	
 }
