#include<stdio.h>
main()
	{
		int a,b,ans;
		printf("Enter A:");
		scanf("%d",&a);
		printf("Enter B:");
		scanf("%d",&b);
		ans=a;
		a=b;
		b=ans;
		printf("A:%d\n",a);
		printf("B:%d",b);
	}
