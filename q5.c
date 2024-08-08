#include<stdio.h>

int main()
{

    for(int i=1;i<=5;i++)
    {
        for(int j=i;j<5;j++){
            printf("  ");
        }
        for(int k=6-i;k<=5;k++)
        {
            printf("%d ",k);
        }
        for(int p=4;p>5-i;p--)
        {
            printf("%d ",p);
        }
        printf("\n");
    }

    return 0;
}