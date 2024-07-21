#include<stdio.h>
int main(){
	int que[5]={10,20,30,40,50},max=5,front=0,rear=4,val;
	char op;
	
	printf("{10,20,30,40,50}\n");
	printf("Do you want to Dequeue 3 values(Y/N):");
	scanf(" %c",&op);
	
	while(op=='Y'){
		if(front==-1||front>rear){
			printf("\t_ _ _ _ _ _ _ _ _ _ _ _ _ \n");			
			printf("\t Can't Dequeue UNDERFLOW");
			break;
		}
		else{
			printf("Value deleted:[%d]\n",que[front]);
			front++;
			
			printf("Do you want to Denqueue values(Y/N):\n");
			scanf(" %c",&op);
		}
	}
	
return 0;	
}

