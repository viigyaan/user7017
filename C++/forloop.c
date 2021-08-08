#include <stdio.h>
int main()
{
    int i,j;
    printf("viigyaan\n");

    for (i = 0, j=5; j<5, i<10; i++, j++) //expression 1 is optional and second condition is run by program
    {
        printf("%d %d\n", i,j);
    }
    

     int a,b;
    printf("viigyaan\n");

    for (a = 0, b=5; b=4, a<10; a++, b++) //expression 1 is optional and second condition is run by program
    {
        printf("%d %d\n", a,b);
    }
}