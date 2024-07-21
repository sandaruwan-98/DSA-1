#include<stdio.h>
#include<stdlib.h>

int k=0,emp;

struct node{
	int Empno;
	char name[20];
	int salary;
	struct node *next;
};

	struct node *head, *temp;
	
int searchemp(){
	int flag;
	if(k==0){
   		printf("\n");
   		printf("ENTER THE DATA BEFORE SEARCH!!!!!");
   		printf("\n");
   		}
   		
	else{
		printf("Enter the empoyee number:");
		scanf("%d",&emp);
		
		temp=head;	
						
/*    while(temp->Empno == emp) {
         printf("%d	 %s	 %d\n",temp->Empno,temp->name,temp->salary);
         temp=temp->next;
         //break;
      }
        //temp=temp->next;
   	    printf("does not exist in the list");
}
*/		 			
	while(temp!=NULL){
			if(temp->Empno==emp){
				printf("%d	%s	%d\n",temp->Empno,temp->name,temp->salary);
				flag=0;
			}
			else{
				
				flag=1;
			}
			
			temp=temp->next;
			
			}
		if(flag==1)  
        {  
            printf("does not exist in the list"); 
        }  
}
}

	
int printlist(){
    if(k==0){
   		printf("\n");
   		printf("ENTER THE DATA BEFORE PRINT!!!!");
   		printf("\n");
   		}
	else
	{
		temp=head;
		while(temp!=NULL){
			//printf("%s",temp->name);
			printf("%d	%s	%d\n",temp->Empno,temp->name,temp->salary);
			temp=temp->next;
		}	
	}
}

int createlist(){
	int n;
	printf("\nEnter the number of employees: ");
	scanf("%d",&n);
	
	//struct node *head, *temp;
	  
	//int k;
	
	for(k=0;k<n;k++){
		/*to create the first node in the list*/
		if(k==0){
			head=(struct node*)malloc(sizeof(struct node));
			temp=head;
		}
		/*to create the firat node in the list*/
		else{
			temp->next=(struct node*)malloc(sizeof(struct node));
			temp=temp->next;
		}
		printf("\nEnter the employee number:");
		scanf("%d",&temp->Empno);
		printf("Enter the name:	");
		scanf(" %s",&temp->name);
		printf("Enter the salary:");
		scanf("%d",&temp->salary);
		
		/*to assign the last node last memory address into NULL*/
		temp->next=NULL;
	}

}
void selectmenu () {
	
	int option;
	
	while (option!='4') {
		printf("\n");	
		printf("==========EMPLOYEE REGISTRATION SYSTEM==========\n");
		printf("1. Enter Employee Details\n");
		printf("2. Output Employee Details\n");
		printf("3. Search Employee\n");
		printf("4. Exit\n");
		printf("\n");
		printf("Enter the Option: ");
		scanf(" %c",&option);
		
		
		
		switch (option) {
			case '1':
				createlist();
				break;
				
			case '2':
				printlist();
				break;
			
			case '3':
				searchemp();
				break;
				
			case '4':
				break;
				
			default:
				printf("Invalid Selection\n");
		}
	}
}
int main () {
	
	selectmenu();
	

	return 0;
}


