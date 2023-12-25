#include<stdio.h>
#include<string.h>
/*
Input:
Enter any string: development

Output:
Length is: 11
*/
int length(){
	char a[100];
	int len=0;
	
	printf("Enter any string:");
	gets(a);
	
	len=strlen(a);
	return len;
}
void main(){
	
	int num;
	num=length();
	
    printf("The length is:%d",num);
  }


