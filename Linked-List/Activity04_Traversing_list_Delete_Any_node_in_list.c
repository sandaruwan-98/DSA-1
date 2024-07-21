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
		/*delete any node in any place of the list*/
		int pos,i;
		
		struct node*pre;
		
		printf("Enter the position of the number to delete: ");
		scanf("%d",&pos);
		
		temp=head;
		
		for(i=1;i<pos;i++){
			pre=temp;
			temp=temp->next;
		}
			pre->next=temp->next;
			free(temp);
			
		/*Traversing the list in order to print the values and memory location(pointers)*/
		
		temp=head;
		
		while(temp!=NULL){
			printf("%d	%p\n",temp->data,temp->next);
			temp=temp->next;
			}
return 0;
}
