#include<stdio.h>
#include<conio.h>

int main(){
	int top=5;
	int stack[5]={10,20,30,40,50};
	char op;
	
	printf("\t Values stack {10,20,30,40,50}\n");
	printf("Do you want to POP a number in to stack(Y/N)?:");
	scanf(" %c",&op);
	
	while(op=='Y'){
		if(top==-1){
			printf("\tSTACK UNDERFLOW can't Drop eny values from the stack\n");
			break;
		}
		else{
			printf("Number removed:%d\n",stack[top]);
			top--;
		
		}
		printf("Do you want to POP a number in to stack(Y/N)?:");
		scanf(" %c",&op);
	}	
getch();
return 0;
}
