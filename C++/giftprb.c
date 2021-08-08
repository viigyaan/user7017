#include <stdio.h>
int main()
{
    
    int gift;
    printf("enter the subject you have passed\n");
    printf("1 for both maths and science\n");
    printf("2 for only maths\n");
    printf("3 for only science\n");
    scanf("%d", &gift);

    if (gift=1)
    {
       printf("Congratulation!!! you are passed in maths and science and your gift is rupees 45\n");
    }
      
    else if (gift=2)
    {
        printf("Congratulation!!! you are passed in maths and your gift is rupees 15\n");
    }

      else if (gift=3)
    {
        printf("Congratulation!!! you are passed in science and your gift is rupees 10\n");
    }

    else
    {
        printf("Sorry!!! You Entered A wrong number\n Try again");
    }
    
    return 0;
}