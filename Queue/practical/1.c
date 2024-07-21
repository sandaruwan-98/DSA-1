/*Patients are arrival to clinic for get treatment. Everyone must register with the nurse
before seeing the doctor. When the registered nurse issue chit with containing a 
number. After that they wait a queue until get their turn according to chit number. 
Everyday nurse issue chit only from 1 to 5.*/
#include<stdio.h>
int main(){
	int que[5]={1,2,3,4,5},max=5,front=-1,rear=-1;
	char op;
	
	printf("\nDo you want to enqueue values(1-5)\n(Y/N):");
	scanf(" %c",&op);
	
	while(op=='Y'){
		if(rear>=max-1){
			printf("can't add any more values(Overflow)\n");
			break;
		}
		else if(front==-1){
				front++;
			}
			rear++;
			printf("\n\tNo [%d] Issued to the patient",que[rear]);
			
			
			printf("\nDo you want to enqueue values(%d-5)\n(Y/N):",rear);
			scanf(" %c",&op);
		}
return 0;
}
	
