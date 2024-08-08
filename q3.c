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
        printf("\n");
    }

    return 0;
}