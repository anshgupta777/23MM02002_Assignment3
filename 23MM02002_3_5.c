#include<stdio.h>
void main()
{
    int days;
    int fine=0;
    printf("The number of days the member is late to return the book :\n");
    scanf("%d",&days);
    if(days<=5)
    fine=days*1;
    else if(days>5&&days<=10)
    fine=(5*1)+(days-5)*2;
    else if(days>10&&days<=30)
    fine=(5*1)+(5*2)+((days-10)*5);
    else
    printf("Your membership has been cancelled\n");
    
    if(fine!=0)
    printf("Fine to be paid is %d rupees",fine);
}