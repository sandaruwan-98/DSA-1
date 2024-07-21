#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

int main(){
	int n;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	
	struct node *head, *temp;
	/*struct node *head;
	  struct node *temp;*/
	  
	int k;
	
	for(k=0;k<n;k++){
		/*to create the firat node in the list*/
		if(k==0){
			head=(struct node*)malloc(sizeof(struct node));
			temp=head;
		}
		/*to create the firat node in the list*/
		else{
			temp->next=(struct node*)malloc(sizeof(struct node));
			temp=temp->next;
		}
		printf("Enter the %d value for the node:	",k+1);
		scanf("%d",&temp->data);
		
		/*to assign the last node last memory address into NULL*/
		temp->next=NULL;
		
		
		}
		/*Insert new node to any place of the list*/
		printf("\n\tENTER NEW NODE TO THE ANY PLACE OF THE LIST\n");
		
		temp=head;
		int pos,count=1;
		
		printf("Enter the position of the new node: ");
		scanf("%d",&pos);
		
		struct node *newn ,*pre;
		
		//creating a new node to insert 
		newn=(struct node*)malloc(sizeof(struct node));
		
		printf("Enter the data to add:");
		scanf("%d",&newn->data);
		
		//Insert node to the middle(any place)
		while(temp!=NULL){
			pre=temp;
			temp=temp->next;
			count++;
			
			if(count==pos){
				pre->next=newn;
				newn->next=temp;
				break;
			}
		}

			
		/*Traversing the list in order to print the values and memory location(pointers)*/
		
		temp=head;
		
		while(temp!=NULL){
			printf("%d	%p\n",temp->data,temp->next);
			temp=temp->next;
			}
return 0;
}
