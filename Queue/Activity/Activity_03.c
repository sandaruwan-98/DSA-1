#include<stdio.h>
	int que[5],max=5,front=-1,rear=-1,val;
	
	void enqueue(){
		if(rear>=max-1){
			printf("can't add any more values(Overflow)\n");
		}
		else{
			printf("Enter the value to be enqueue: ");
			scanf("%d",&val);
			
			if(front==-1){
			front++;
			}
			rear++;
			que[rear]=val;			
		}
	}
	
	void Dequeue(){
		if(front==-1||front>rear){
			printf("\t_ _ _ _ _ _ _ _ _ _ _ _ _ \n");			
			printf("\t Can't Dequeue UNDERFLOW");
		}
		else{
			printf("Value deleted:[%d]\n",que[front]);
			front++;
		}
	}
	
	int main(){
		int op;
		
		while(op!=3){
				printf("\nEnter the operation\n1.enqueue\n2.Dequeue\n3.Exit\n");
				scanf("%d",&op);
				
				switch(op){
					case 1:
						enqueue();
						break;
					case 2:
						Dequeue();
						break;
					case 3:
						break;
					default:
						printf("Invalid operation\n");
						printf("Enter valid operation");
						
				}
		}
	return 0;
	}
