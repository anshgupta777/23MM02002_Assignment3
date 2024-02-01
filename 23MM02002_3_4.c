#include<stdio.h>
void main()
{
    int x1,x2,x3,y1,y2,y3;
    printf("Enter coordiantes of point 1 (x1,y1)\n");
    scanf("%d%d",&x1,&y1);
    printf("Enter coordiantes of point 2 (x2,y2)\n");
    scanf("%d%d",&x2,&y2);
    printf("Enter coordiantes of point 3 (x3,y3)\n");
    scanf("%d%d",&x3,&y3);
    float s1=(x2-x1)/(y2-y1);
    float s2=(x3-x1)/(y3-y1);
    if (s1==s2)
    printf("The three points fall on one straight line");
    else
    printf("The three points do not fall on one straight line");
    

}