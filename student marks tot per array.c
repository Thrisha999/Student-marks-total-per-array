#include<stdio.h>
void main()
{
	int p[100],q[10],i,j,n,tm=0,mm;
	float per;
	printf("enter no. of students marks you want to collect:\n");
	scanf("%d",&n);
	printf("enter max marks:\n");
	scanf("%d",&mm);
	for(i=1;i<=n;i++)
	{
		printf("enter roll no. of student %d:\n",i);
		scanf("%d",&p[i]);
		for(j=1;j<=5;j++)
		{
			printf("enter subject %d marks:\n",j);
			scanf("%d",&q[j]);
			tm=tm+q[j];
		}
		per=(tm*100)/mm;
		printf("total marks of student %d=%d\n",i,tm);
		printf("percentage of student %d=%f\n",i,per);
		tm=0;
	}
}
