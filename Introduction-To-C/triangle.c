#include <stdio.h>

void main()
{
    int a,b,c;
    printf("Enter The Sides Of The Triangle : ");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c&&b+c>a&&a+c>b)
    {
        printf("It is a valid triangle!");
    }
    else
    {
        printf("It is not a valid triangle!");
    }
}