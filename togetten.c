// write your code here
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i=0,count=0;
    float avg=0,k=0;

    scanf("%d",&n);
    float ar[n];
    for(i=0;i<n;i++)
	{
		scanf("%f",&ar[i]);
	}
    
    for(i=0;i<n;i++)
	{
		k=k+ar[i];
		
	}
	avg = k/n;
	while(avg<9.5){
	    k = k + 10;
	    count = count + 1;
	    n=n+1;
	    avg = k/n;
	}
	printf("%d",count);
}