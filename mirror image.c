#include <stdio.h>
int main(void) 
{
	int a[10],b[10],i,n,count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==b[n-i-1])
		count++;
	}
	if(count==n)
	printf("YES");
	else
	printf("NO");
 	return 0;
}
