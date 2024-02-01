#include <stdio.h>
void main()
{
    int num;
    printf("Input an integer:\n");
    scanf("%d",&num);
    if(num>0)
    printf("%d is a positive number",num);
    else if(num<0)
    printf("%d is a negative number",num);
    else
    printf("Number is 0");
}