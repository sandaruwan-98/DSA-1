#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

int main(){
	int n;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	
	struct node *head, *temp;
	
	int k;
	
	for(k=0;k<n;k++){
		/*To create the first node in the list*/
		if(k==0){
			head=(struct node*)malloc(sizeof(struct node));
			temp=head;
		}
		/*To create the rest of the nods*/
		else{
			temp->next=(struct node*)malloc(sizeof(struct node));
			temp=temp->next;
		}
		printf("Enter the data for %d node: ",k+1);
		scanf("%d",&temp->data);
		
		/*To assign last node next memory address as NULL*/
		temp->next=NULL;
	}
	return 0;
}
