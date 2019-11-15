#include<stdio.h>
int main(void)
{
	int i, n=8, a=0, b=1, c;
	printf("fibonacci series:");
	
    for(i=1; i<=n; i++)
    {
    
    	printf("%d,",b);
    c= b+a;	
		a=b;
    	b=c;
    	
	}
	return 0;
}
