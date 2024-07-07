#include <stdio.h>

int main()
{
    int i;
    int input;
    scanf("%d", &input);
    // for (i = 0; i <= 100; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         printf("%d\n", i);
    //     }
    // }
    for (i = input; i <= 100; i += 2)
    {
        if (i == 4)
        {
            continue;
        }
        printf("%d\n", i);
        if (i == 60)
        {
            break;
        }
    }

    return 0;
}