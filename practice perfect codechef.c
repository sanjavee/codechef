#include <stdio.h>

int main()
{
	int p1,p2,p3,p4;
	int count=0;
	int i;
	scanf("%d %d %d %d",&p1,&p2,&p3,&p4);
	int arr[4]={p1,p2,p3,p4};
	for(i=0;i<4;i++)
	   {
	       if(arr[i]>=10)
	       count++;
	   }
	   printf("%d\n",count);
	return 0;
}
