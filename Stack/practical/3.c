/*c.To check whether a user entered string is a palindrome or not.*/
#include <stdio.h>
#include <string.h>
 
int main()
{
    char s[100];  
    int i,n,c=0;
 
    printf("Enter the string : ");
    gets(s);//TO GET THE INPUT IN TO CHAR S[100]
    n=strlen(s);//TO CALCULATE LRNGTH AND ASSIGN IT TO INT N
 
    for(i=0;i<n/2;i++)  
    {
    	if(s[i]==s[n-i-1])
    	c++;
 
 	}
 	if(c==i)
 	    printf("string is palindrome");
    else
        printf("string is not palindrome");
 
 	 
     
    return 0;
}
