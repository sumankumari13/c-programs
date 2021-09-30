#include<stdio.h>

int main()
{
    int age;
    int vipass = 0;
    vipass = 1;
    printf("Enter the age\n");
    scanf("%d", &age);

    if ( (age <= 70 && age >=18) || (vipass = 1))
    {
        printf("You can drive");
    }
    else
    {
        printf("You cannot drive\n");
    }


return 0;
}