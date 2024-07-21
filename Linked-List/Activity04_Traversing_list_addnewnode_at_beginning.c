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
		/*Insert new node at the Beginning of the list*/
		printf("\n\tENTER NEW NODE TO THE BEGINNING OF THE LIST\n");
		
		struct node *newn;
		
		//creating a new node to insert 
		newn=(struct node*)malloc(sizeof(struct node));
		
		printf("Enter the data to add to beginning:	");
		scanf("%d",&newn->data);
		
		//Insert an element to the beginnig
		newn->next=head;
		head=newn;

			
		/*Traversing the list in order to print the values and memory location(pointers)*/
		
		temp=head;
		
		while(temp!=NULL){
			printf("%d	%p\n",temp->data,temp->next);
			temp=temp->next;
			}
return 0;
}
