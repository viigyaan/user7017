#include <stdio.h>

int main(){
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    printf("Your age is %d\n", age);
    if (age>=18) 
    {
        printf("You can vote!\n");
    }
    else if(age>10){
        printf("Your age is %d and you can vote for kids\n", age);
    }
    // else if(age>4){
    //     printf("Your ill\n", age);
    // }
    else{
        printf("You can't vote!!\n");
    }
}