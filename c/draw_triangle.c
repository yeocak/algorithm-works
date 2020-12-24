//A program that creates triangle

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input;

    printf("Write a length:");
    scanf("%d",&input);

    for(int a = 0; a<input/2; a++){
        for(int e = 0; e<input/2-a-1; e++){
            printf(" ");
        }
        printf("/");
        for(int e = 0; e<a*2; e++){
            if(a == input/2-1){ // For base of triangle
                printf("_");
            }
            else{
                printf(" ");
            }
        }
        printf("\\");

        printf("\n");
    }

    return 0;
}
