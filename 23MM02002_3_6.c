#include<stdio.h>
void main()
{
    int num,i,p1,p2,sum,tag=0;
    printf("Enter the number:");
    scanf("%d",&num);
    int sq= num*num;
    for(i=10;;i*=10)
    {
        p1=sq/i;
        p2=sq%i;
        if(p1>0)
        {
            if(p2!=0)
            {
                sum=p1+p2;
                if(sum==num)
                    tag=1;
                else
                    continue;
                
            }
            else
                continue;
        }
        else
            break;
    }
    if(tag==0)
        printf("%d is not a Kaprekar Number",num);
    else
        printf("%d is a Kaprekar Number",num);
    
}