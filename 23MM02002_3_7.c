#include<stdio.h>
void main()
{
    int M,W,N,K,T;
    printf("Enter the marks obtained by the student:");
    scanf("%d",&M);
    printf("\nEnter the number of classes attended by the student:");
    scanf("%d",&N);
    printf("\nEnter the total number of classes:");
    scanf("%d",&K);
    W=N/K;
    if(M<100&M>0&&N<=K)
    {
        T=M*W;
        printf("Final Score =%d\n",T);
            if(T>=90)
            printf("Grade = EX");
            else if(T>=80&&T<=89)
            printf("Grade is = A");
            else if(T>=70&&T<=79)
            printf("Grade is = B");
            else if(T>=60&&T<=69)
            printf("Grade is = C");
            else if(T>=50&&T<=59)
            printf("Grade is = D");
            else if(T>=40&&T<=49)
            printf("Grade is = P");
            else 
            printf("Grade is = F");

    }
    else
    printf("Invalid data entered");
}