#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *left;
	struct node *right;
};

int main(){
	
	int num;
	printf("Enter a number of nodes: ");
	scanf("%d",&num);
	
	int i,value;
	struct node *root, *temp, *pre;
	
	for(i=0;i<num;i++){
		printf("\nEnter the value: ");
		scanf("%d",&value);

		if(i==0){
			root=(struct node*)malloc(sizeof(struct node));
			temp=root;
			}
			
		else{
			if(value>=temp->data){
				while(temp!=NULL){
					pre=temp; 
					temp=temp->right;
				}
				printf("\nPRE Data %d\n",pre->data);
				if(value>=pre->data){
					pre->right=(struct node*)malloc(sizeof(struct node));
					temp=pre->right;
					printf("PRE=%p Pre Right= %p\n",pre,pre->right);
				}
				else{
					pre->left=(struct node*)malloc(sizeof(struct node));
					temp=pre->left;
					printf("PRE=%p Pre left= %p\n",pre,pre->left);	
				}
				
			}
			
			else{
				while(temp!=NULL){
					pre=temp; 
					temp=temp->left;
				}
				printf("\nPRE Data %d\n",pre->data);
				if(value>=pre->data){
					pre->right=(struct node*)malloc(sizeof(struct node));
					temp=pre->right;
					printf("PRE=%p Pre Right= %p\n",pre,pre->right);
				}
				else{
					pre->left=(struct node*)malloc(sizeof(struct node));
					temp=pre->left;
					printf("PRE=%p Pre left= %p\n",pre,pre->left);	
				}
				
			}
		}
		
		temp->data=value;
		temp->left=NULL;
		temp->right=NULL;
		
		printf("root=%p data=%d temp=%p\n\n",root,temp->data,temp);
		
		temp=root;
	}
	
	return 0;
}
