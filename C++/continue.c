#include <stdio.h>
int main()
{
    int i, age;
    for (i = 0; i < 11; i++)
    {
        printf("%d\n Enter your age\n", i);
        scanf("%d", &age);

        // if (age > 8)
        // {
        //     break;
        // }
        

        if (age>10)
        {
            continue;
        }

        printf("vigyan is a good boy\n");
    }
    return 0;
}