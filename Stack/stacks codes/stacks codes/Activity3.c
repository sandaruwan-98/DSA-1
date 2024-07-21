#include<stdio.h>
#include<stdlib.h>
	int stackp[5];
	int i=0;
	char x,y;

//To get values for the stack from the user	
void push (){

	do {
		printf("Do you want to add a number(Enter Y if you do): ");

		scanf(" %c",&x);
		
		if(x =='Y'){
		
		if(i==5){
			printf("\nOVERFLOW\nCan't add a number,the stack is full\n");
			
			printf("\nEntered numbers are\n\t");
			for(i=0 ; i<5 ; i++){
				printf("%d\t",stackp[i]);
			}
			main();
		}
		
		else {
			printf("Enter a number : ");
			int n;
			scanf("%d",&n);
			
			stackp[i]=n;
			i++;
		}
		
		
	} }
	while (x=='Y');
	
}

//To delete entered values by the user
void pop (int stackp[]){

	printf("\nNumbers in the stack are\n\t");
	for(i=0 ; i<5 ; i++){
		printf("%d\t",stackp[i]);
	}
	printf("\n\n");
	i=4;
	do {
	printf("Do you want to pop a number (Enter Y if you do) : ");

	scanf(" %c",&y);
	
	if (y=='Y'){ 
	
	if(i==-1){
		printf("\nUNDERFLOW\nCan't pop a number, the stack is empty\n\n");
		break;
	}
	else{
		int val =stackp[i];
		printf("Removed number : %d\n",val);
		i--;
	}
}  }
while(y == 'Y');
	
	
}


int main (){
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
			pop(stackp);
				main();
				break;
			
		case 3  :
		    printf("\nYou existed the program\n");
		    exit(0);
			
		default :
			printf("Enter a valid number from the given menu\n");
			main();
			break;
	}
return 0;
}
