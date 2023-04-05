#include <stdio.h>
void calc_main(int x,int y)
{
    int mode,result;
    printf("Select The Operation : 1) Addition 2) Subtraction 3) Divion 4) Multiplication \n");
    scanf("%d",&mode);
    switch(mode)
    {
        case 1:result=x+y;
        break;
        case 2:result=x-y;
        break;
        case 3:result=x/y;
        break;
        case 4:result=x*y;
        break;
        default:printf("Invalid Mode Selection!\n");
        calc_main(x,y);
    }
    printf("\nResult : %d\n",result);
}
void main()
{
    int num1,num2;
    printf("Calculator");
    printf("\n Enter The Operands : ");
    scanf("%d%d",&num1,&num2);
    calc_main(num1,num2);
}