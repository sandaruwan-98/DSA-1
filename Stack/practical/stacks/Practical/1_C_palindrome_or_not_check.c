 //To check whether a user entered string is a palindrome or not. (Palindrome: A word,phrase or sentence that reads the same backward or forward)

#include<stdio.h>
#include<conio.h>

 int main(){
 	int TOP=-1;
 	char STACK[5];
 	char RSTACK[5];
 	int i,MAX=5;
 	
 	printf("Enter a string with 5 characters:");
	for(i=0;i<=4;i++){
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

	for(i=0;i<=4;i++){
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
	
	int set=0;
	for(i=0;i<=4;i++){
		if(RSTACK[i]!=STACK[i]){
		printf("\nNOT A PALINDROME!!!!");
		break;
		}
		
		else{
			set=set+1;//srt++;
		}
			
			

	}
	if(set!=0){
		printf("\n\tPALINDROME!!!!");
	}

 	
 return 0;	
 getch();
 }
