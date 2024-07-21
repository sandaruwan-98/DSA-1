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
		/*Delete the last node of the list*/
		printf("\n\tDELETE THE LAST NODE OF THE LIST\n");
		
		temp=head;
		
		struct node *pre;
		
		/*Delete the last element*/
		while(temp!=NULL){
			pre=temp;//pre pointer used to keep the track of previous node	
			temp=temp->next;
				if(temp->next==NULL){
					break;
				}		
		}
		pre->next=NULL;
		free(temp);//Releasing the memory location which is in temp

			
		/*Traversing the list in order to print the values and memory location(pointers)*/
		
		temp=head;
		
		while(temp!=NULL){
			printf("%d	%p\n",temp->data,temp->next);
			temp=temp->next;
			}
return 0;
}
