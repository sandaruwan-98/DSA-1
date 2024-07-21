#include <stdio.h>
#include <string.h>
int main() {
	
	int length=0;
	int TOP=-1;
 	char STACK[length];
 	int i,MAX=length;
 	char add[1000];
 	
	printf("Enter the String :");
	scanf("%s",&add);
 	length=strlen(add);
 	
	for(i=0;i<length;i++){
		if(TOP==length-1){
			printf("Stack over flow!!\n");
			break;
		}
		else{
			TOP=TOP+1;//TOP++;
		}
	}
	printf("Length of the string = %d\n",length);
	printf("Enterd string value is: %s\n",STACK);


return 0;
}


