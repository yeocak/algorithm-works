//The program that draws X

#include <stdio.h>
#include <stdlib.h>

int main(){

    int size;
    printf("Enter the size of X:");
    scanf("%d",&size);

        //The upper part of X
        for(int a = 1; a <= size/2; a++){

            for(int e = 1; e<a; e++){
                printf(" ");
            }

            printf("*");

            for(int e = 1; e <= size-(a*2); e++){
                printf(" ");
            }

            printf("*");

            printf("\n");

        }


        //Middle part of X

        if(size % 2 == 1){
            for(int a = 1; a<=size/2; a++){
                printf(" ");
            }
            printf("*\n");
        }

        //Lower part of X

        for(int a = size/2; a >= 1; a--){

            for(int e = 1; e<a; e++){
                printf(" ");
            }

            printf("*");

            for(int e = 1; e <= size-(a*2); e++){
                printf(" ");
            }

            printf("*");

            printf("\n");
        }

    return 0;
}
