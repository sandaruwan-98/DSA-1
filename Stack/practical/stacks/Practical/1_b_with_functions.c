 //Practical To reverse a string entered by a user using a stack & functions.
#include<stdio.h>
#include<conio.h>
 	int TOP=-1;
 	char STACK[5];
 	char RSTACK[5];
 	int i,MAX=5;
 	
void PUSH()
	{ 	
 	printf("Enter a string with 5 characters:");
	for(i=0;i<5;i++){
		if(TOP==MAX-1){
			printf("Stack over flow!!");
			break;
		}
		else{
			TOP=TOP+1;//TOP++;
			scanf(" %c",&STACK[TOP]);
		}
	}
	
	system("cls");
	
	}
	
void POP()
	{ 	
	for(i=0;i<5;i++){
		if(TOP==-1){
			printf("Stack over Underflow!!");
			break;
		}
		else{
			RSTACK[i]=STACK[TOP];
			TOP=TOP-1;//TOP--
		}
	}
	printf("Enterd string value is: %s\n",STACK);
	printf("Reverse string value is: %s\n",RSTACK);
	 }
int main(){
	
	PUSH();
	POP();
	
return 0;	
getch();
}
