#include<stdio.h>
#include<stdlib.h>
int main()
{
    char x=5;
    char y=7;

    char output1=~x;
    char output2=x&y;
    char output3=x|y;
    char output4=x^y;

    printf("%d\n",output1);
    printf("%d\n",output2);
    printf("%d\n",output3);
    printf("%d\n",output4);

    return 0;

}