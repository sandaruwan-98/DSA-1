 //Activity-02 POP eliments to a stack(stack size is 5 in this code)
 #include<stdio.h>
 
 int main(){
 	int TOP=4;
 	int STACK[5]={10,20,30,40,50};
 	char op;
 	
 	printf("\tStack={10,20,30,40,50}\n");
 	printf("Do you want to POP a number from stack(Y/N)?:");
	scanf(" %c",&op);
 	while(op=='Y')
	 {
 		if(TOP==-1)
		 	{
 			printf("\tStack Underflow!!!!!!!");
 			break;
	 		 }
		else
		{
			printf("Value removed %d\n",STACK[TOP]);
			TOP=TOP-1;
		}
	printf("Do you want to POP a number from stack(Y/N)?:");
	scanf(" %c",&op);
 	 }
 	
 return 0;	
 }
