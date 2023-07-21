#include <stdio.h>

int main(void)
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int N;
        int K;
        scanf("%d",&N);
        scanf("%d",&K);
        if(N<K)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

	return 0;
}

