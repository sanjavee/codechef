#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int y,x;
        scanf("%d %d",&y,&x);
        printf("%d\n",y*10+x*90);
    }
	return 0;
}

