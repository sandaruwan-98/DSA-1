/*Vehicles on toll-tax Bridge: In the queue for the booth can always accommodate 3 
vehicles. The vehicle that comes first to the toll tax booth leaves the booth first. If there 
is an empty space in the queue new vehicle can be utilize it. But the vehicle that comes 
last leaves last*/
#include<stdio.h>
	int que[3],max=3,front=-1,rear=-1,val;
	
	void enqueue(){
		if((front==0&&rear==max-1)||(front==rear+1)){
			printf("can't add any more cars booth is full\n");
		}
		else{
			printf("Enter a car number to enter the  booth: ");
			scanf("%d",&val);
			
			if(front==-1){
			front=0;
			rear=0;
			}
			else if((rear==max-1)&&(front!=0)){
				rear=0;
			}
			else{
				rear++;
			}
			que[rear]=val;
			printf("\nfront %d		rear %d\n",front,rear);
		}
	}
	
	void Dequeue(){
		if(front==-1 && rear==-1){
			printf("\t_ _ _ _ _ _ _ _ _ _ _ _ _ \n");			
			printf("\t Can't remove cars booth is empty");
		}
		else if(front==max-1&& rear!=max-1){
			printf("\ncar removed:[%d]\n",que[front]);
			front=0;
		}
		else if(front==rear){
			printf("\ncar removed:[%d]\n",que[front]);
			front=-1;
			rear=-1;	
		}
		else{
			printf("car removed:[%d]\n",que[front]);
			front++;
		}
		printf("\nfront %d		rear %d\n",front,rear);
	}
	
	int main(){
		int op;
		
		while(op!=3){
				printf("\n1.ENTER A CAR\n2.REMOVE A CAR\n3.EXIT\n");
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
						printf("Invalid menu seclection\n");
						printf("Enter valid menu seclection");
						
				}
		}
	return 0;
	}
