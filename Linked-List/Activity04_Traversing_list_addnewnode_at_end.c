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
		/*Insert new node at the end of the list*/
		printf("\n\tENTER NEW NODE TO THE END OF THE LIST\n");
		
		struct node *new ,*pre;
		
		//creating a new node to insert 
		new=(struct node*)malloc(sizeof(struct node));
		
		printf("Enter the data to add last:	");
		scanf("%d",&new->data);
		
		//Insert node to the end
		while(temp!=NULL){
			pre=temp;//pre pointer used to create the track of the previous node
			temp=temp->next;//temp is used to create the track of the next node
		}
			pre->next=new;
			new->next=NULL;
			
		/*Traversing the list in order to print the values and memory location(pointers)*/
		
		temp=head;
		
		while(temp!=NULL){
			printf("%d	%p\n",temp->data,temp->next);
			temp=temp->next;
			}
return 0;
}
