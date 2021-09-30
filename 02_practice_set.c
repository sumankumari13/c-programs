// #include <stdio.h>

// int main()
// {
//     int physics, chemistry, maths;
//     float total;
//     printf("Enter the physics marks\n");
//     scanf("%d", &physics);

//     printf("Enter the chemistry marks\n");
//     scanf("%d", &chemistry);

//     printf("Enter the maths marks\n");
//     scanf("%d", &maths);

//     total = (physics + chemistry + maths) / 3;

//     if (total < 40 || physics < 33 || chemistry < 33 || maths < 33)
//     {
//         printf("Your percentage is %f and you are fail\n", total);
//     }
//     else
//     {
//         printf("Your percentage is %f and you are pass\n", total);
//     }

//     return 0;
// }
//#include <stdio.h>
// int main()
// {
//     int year;
//     printf("Enter a year: ");
//     scanf("%d", &year);

//     if((year %4 == 0 && year %100!=0)|| year %400 == 0)
//     {
//         printf("It is a leap year");
//     }
//     else
//     {
//         printf("Not a leap year");
//     }

//     return 0;
// }
#include <stdio.h>

int main()
{
    int a,b,c,d;
    printf("Enter the numbers\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if(a>b && a>c && a>d){
        printf("%d is largest\n", &a);
    }
    if(b>a && b>c && b>d){
        printf("%d is largest\n", &b);
    }
    if(c>a && c>b && c>d){
        printf("%d is largest\n", &c);
    }
    if(d>a && d>b && d>c){
        printf("%d is largest\n", &d);
    }

    return 0;
}