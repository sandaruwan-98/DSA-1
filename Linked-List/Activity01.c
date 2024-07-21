#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

int main(){
	
	struct node *head;
	struct node *one;
	struct node *two;
	struct node *three;
	
	one=(struct node*)malloc(sizeof(struct node));
	two=(struct node*)malloc(sizeof(struct node));
	three=(struct node*)malloc(sizeof(struct node));
	
	one->data=10;
	two->data=20;
	three->data=30;
	
	one->next=two;
	two->next=three;
	three->next=NULL;
	
	head=one;
	
	printf("%p \n%d		%p\n%d		%p\n%d		%p\n",head,one->data,one->next,two->data,two->next,three->data,three->next);

return 0;
}
