#include<stdio.h>
#include<stdlib.h>
int main()
{
    int grade;
    printf("Enter your grade:");
    scanf("%d",&grade);
    if (grade>=60)
    printf("Congratulations!\n");
    else
    printf("Failed.Try again\n");
    return 0;


}