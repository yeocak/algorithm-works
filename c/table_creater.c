//You can create tables with length of sides.
//Program gives you table with maximum size of boxes.

#include <stdio.h>

int main()
{

    int a,b;

    printf("Enter the horizontal length:\n");
    scanf("%d",&a);

    printf("Enter the vertical length:\n");
    scanf("%d",&b);

    int gcdn = gcd(a,b);

    for(int u = 0; u<b/gcdn; u++)
    {

        for(int o = 0; o<a; o++)
        {
            printf("*");
        }

        printf("\n");

        for(int t = 0; t<gcdn-2; t++)
        {

            for(int o = 0; o<a/gcdn; o++)
            {

                printf("*");

                for(int l = 0; l<gcdn-2; l++)
                {
                    printf(" ");
                }
                printf("*");
            }

            printf("\n");

        }

        if(b != 1)
        {
            for(int o = 0; o<a; o++)
            {
                printf("*");
            }
        }

        printf("\n");
    }

    return 0;
}

int gcd(int a, int b)
{

    for(int z = a; z>1; z--)
    {
        if(a % z == 0 && b % z == 0)
        {
            return z;
        }
    }
}
