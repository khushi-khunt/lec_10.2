#include<stdio.h>
/*
Input:
Enter array size: 5
Enter array elements:
a[0] = 6
a[1] = 4
a[2] = 1
a[3] = 5
a[4] = 2

Output:
The sum of an Array: 18
*/

int add(int a[100],int n){
	int i,sum=0;
	
	for(i=0;i<n;i++)
	{
  	   sum=sum+a[i];
	}
	return sum;
}
void main(){
	int n,i;
	
	printf("Enter array size:");
	scanf("%d",&n);
	
	int a[n];
	
	printf("Enter elements:-\n");
	
	for(i=0;i<n;i++)
	{
  	    printf("Enter a[%d]:",i);
  		scanf("%d",&a[i]);
	}
	
	printf("The sum of an Array is %d",add(a,n)); 
	 
  }

