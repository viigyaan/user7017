#include <stdio.h>
int main()
{
    int num, i =1;
    printf("enter a game number:\n");
    printf("javelin 1");
    printf("cricket 2");
    printf("wrestling 3");
    printf("boxing 4");
    printf("hockey 5");


    scanf("%d", &num);

    switch(num){
        case 1:
        printf("javelin");
        break;

        case 2:
        printf("cricket");
        break;

        case 3:
        printf("wrestling");
        break;

        case 4:
        printf("boxing");
        break;

        case 5:
        printf("hockey");
        break;

        default:
        printf("none");
        break;
    }
    return 0;
}