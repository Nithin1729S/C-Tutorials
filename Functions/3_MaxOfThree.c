#include<stdio.h>
#include<stdlib.h>

int maxBetween3()
{
    int num1,num2,num3;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&num1,&num2,&num3);

    if (num1>num2)
        if (num1>num3)
            return num1;
        else
            return num3;
    else if (num2>num3)
        return num2;
    else
        return num3;
}


int main()
{
    int max;
    max=maxBetween3();
    printf("The max is : %d",max);
    return 0;

}

