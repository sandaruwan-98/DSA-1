/*a.A menu driven program to push and pop the elements to and from a stack which can 
hold 3 elements.*/
#include<stdio.h>
#include<stdlib.h>
	int stack[3];
	int i=0;
	char x,y;

//To get values for the stack from the user	
void push (){

	do {
		printf("Do you want to add a number(Y/N): ");

		scanf(" %c",&x);
		
		if(x =='Y'){
		
		if(i==3){
			printf("\nOVERFLOW\nCan't add a number:-The stack is full\n");
			
			printf("\nEntered numbers are\n\t");
			for(i=0 ; i<3 ; i++){
				printf("%d\t",stack[i]);
			}
			main();
		}
		
		else {
			printf("Enter a number : ");
			int n;
			scanf("%d",&n);
			
			stack[i]=n;
			i++;
		}
		
		
	} }
	while (x=='Y');
	
}

//To delete entered values by the user
void pop (int stack[]){

	printf("\nNumbers in the stack are\n\t");
	for(i=0 ; i<3 ; i++){
		printf("%d\t",stack[i]);
	}
	printf("\n\n");
	i=2;
	do {
	printf("Do you want to pop a number(Y/N): ");

	scanf(" %c",&y);
	
	if (y=='Y'){ 
	
	if(i==-1){
		printf("\nUNDERFLOW\nCan't pop a number:-The stack is empty\n\n");
		break;
	}
	else{
		int val =stack[i];
		printf("Removed number : %d\n",val);
		i--;
	}
}  }
while(y == 'Y');
	
	
}


int main (){
	printf("\n__________________________\n");
	printf("\n\t Menu\n");
	printf("__________________________\n");
	
	printf("\n\t1.Push\n\n\t2.Pop\n\n\t3.Exit\n");
	printf("__________________________\n");
	

	printf("\nEnter the operation : ");
	int n;
	scanf("%d",&n);
	
	
	
	switch (n){
		case 1  :
			push();
			break;
			
		case 2  :
			pop(stack);
				main();
				break;
			
		case 3  :
		    printf("\nYou existed the program\n");
		    exit(0);
			
		default :
			printf("Invalid number:-Please enter a valid seclection from the menu\n");
			main();
			break;
	}
return 0;
}
