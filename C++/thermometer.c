#include <stdio.h>
int main()
{
    int t;
    printf("Enter temperature in celcius\n");
    scanf("%d", &t);

    printf("%d\n", (t * 9/5) + 32);
}