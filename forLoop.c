#include <stdio.h>

int main()
{
    int i;
    // for (i = 0; i < 100; i++)
    // {
    //     printf("I love you\n");
    // }    
    int n;
    scanf("%d", &n);
    long long int sum = 1;
    for (int i = 1; i <= 64; i++)
    {
       sum *=2; 
       printf("%lld\n", sum);
    }
    printf("%lld", sum);

    return 0;
}