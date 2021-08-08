#include <stdio.h>
int main()
{
    int age, marks;
    printf("Enter your age\n");
    scanf("%d", &age);

    printf("Enter your marks\n");
    scanf("%d", &marks);
    switch (age){
        case 3:
        printf("Age is 3\n");
        switch (marks)
        {
        case 45:
            printf("marks are 45\n");
            break;
        
        default:
        printf("marks aren't 45");
            break;
        }
        break;

        case 13:
        printf("Age is 13\n");
        break;

        case 23:
        printf("Age is 23\n");
        break;

        default:
        printf("Age is neither 3 nor 13\n");
        break;
    }

    return 0;
}