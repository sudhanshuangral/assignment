#include<stdio.h>
void main()
{
    int n,i,sum;
    int max,min;
    printf("Enter the maximum limit:");
    scanf("%d",&min);
    printf("Enter the minimum limit:");
    scanf("%d",&max);
    for(n=min;n<max;n++)
    {
        i=1;
        sum=0;
        while(i<n)
        {
        if(n%i==0)
            sum=sum+i;
        i++;
        }
    if(sum==n) 
    {
    printf("all the three digit perfect numbers:%d\n",n);
    }
    }
}