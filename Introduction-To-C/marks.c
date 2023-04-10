#include <stdio.h>
void main()
{
    int arr[5],i,m=0,x;
    printf("Enter The Marks : ");
    for(i=0;i<5;i++)
    {
        printf("\n Subject %d : ",i+1);
        scanf("%d",&arr[i]);
        m=m+arr[i];
    }
    printf("\n Total Marks : 500 ");
    printf("\n Marks Obtained : %d",m);
    for(i=0;i<5;i++)
    {
        printf("\n Subject %d: ",i+1);
        x=arr[i];

        // since total marks is 100 , no need of converting it to percentage!
        
        if(x>=90)
        {
            printf("\n Percentage : %d  \n Grade : A",x);
        }
        else if(x>=80)
        {
            printf("\n Percentage : %d \n Grade : B",x);
        }
         else if(x>=70)
        {
            printf("\n Percentage : %d \n Grade : C",x);
        }
         else if(x>=60)
        {
            printf("\n Percentage : %d \n Grade : D",x);
        }
         else if(x>=40)
        {
            printf("\n Percentage : %d \n Grade : E",x);
        }
         else if(x<40)
        {
            printf("\n Percentage : %d \n Grade : F",x);
        }
    }
}