#include<stdio.h>
void main()
{
	long long int q,count=0,count1=0,n;
	printf("Enter the Number: ");
	scanf("%d",&n);
	while(n!=0)
	{
	q = n%10;	
	if(q%2==0)
		count+=1;
	else
		count1+=1;
	n = n/10;
	}
        printf("The number of ODD = %d\nThe Number of Even = %d\n",count1,count);
}
