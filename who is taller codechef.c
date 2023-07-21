#include <stdio.h>

int main(void)
{
	int t;
    scanf("%d\n",&t);
    int x;
    int y;
    scanf("%d %d",&x,&y);
    while(t--)
    {
        if(x>y)
        {
        printf("A\n");
        }
        else
            printf ("B\n");
    }
	return 0;
}
