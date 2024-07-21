#include<stdio.h>

int main(){
	int max=5;
	int top=-1;
	int stack[5];
	char op;
	int i;
	
	printf("Do you want to Push a number in to stack(Y/N)?:");
	scanf(" %c",&op);
	
	while(op=='Y'){
		if(top>=max-1){
			printf("\tSTACK OVERFLOW cant enter eny values to the stack\n");
			break;
		}
		else{
			printf("Enter number:");
			top++;
			scanf("%d",&stack[top]);
		}
		printf("Do you want to Push a number in to stack(Y/N)?:");
		scanf(" %c",&op);
	}	
}
