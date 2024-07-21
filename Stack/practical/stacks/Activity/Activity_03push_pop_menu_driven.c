 //Activity-03 Push/POP/exit "Menu driven program" for enter 5 numbers
 #include<stdio.h>
 
	int MAX=6;
 	int TOP=-1;
 	int STACK[5];
 	int VALUE;
 	char op;
 
void push(){ 	
 	printf("Do you want to Push a number in to stack(Y/N)?:");
	scanf(" %c",&op);
 	while(op=='Y')
	 {
 		if(TOP>=MAX-1)
		 	{
 			printf("\n\tStack Overflow");
 			break;
	 		 }
		else
		{
		printf("\nEnter A value to add(push) in to the stack:");
		TOP=TOP+1;
		scanf("%d",&STACK[TOP]);
		}
		
 	 }
 		int i=4;
		printf("\nEntered numbers are\n\t");
		for(i=0 ; i<5 ; i++){
		printf("%d\t",STACK[i]);
 }
 		main();
}

void pop(int STACK[]){

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
 	main();		
 }


 int main ()
 {
	printf("\n\n__________________________\n");
	printf("\t Menu\n");
	printf("__________________________\n");
	
	printf("\n\t1.Push\n\t2.Pop\n\t3.Exit\n");
	printf("__________________________\n");
	

	printf("\nEnter the operation : ");
	int n;
	scanf("%d",&n);
	
	
	
	switch (n){
		case 1  :
			push();
			break;
			
		case 2  :
			pop(STACK);
				break;
			
		case 3  :
		    printf("\nYou existed the program\n");
		    break;
			
		default :
			printf("Enter a valid number from the given menu\n");
			break;
		}
return 0;

}

