#include<stdio.h>
int main(){
	int que[3],max=3,front=-1,rear=-1,val;
	char op;
	
	printf("Do you want to enqueue 3 values(Y/N):");
	scanf(" %c",&op);
	
	while(op=='Y'){
		if(rear>=max-1){
			printf("can't add any more values(Overflow)\n");
			break;
		}
		else{
			printf("Enter the value to be enqueue: ");
			scanf("%d",&val);
			
			if(front==-1){
				front++;
			}
			rear++;
			que[rear]=val;
			
			printf("Do you want to enqueue values(Y/N):");
			scanf(" %c",&op);
		}
	}
return 0;	
}
