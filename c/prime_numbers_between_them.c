//A program that prints all prime numbers between
// minimum value and the maximum value.

#include <stdio.h>
#include <stdlib.h>

int main(){

    int min;
    int max;
    int gate = 1;
    int any = 1;


    printf("Write a minimum value:");
    scanf("%d",&min);

    printf("Write a maximum value:");
    scanf("%d",&max);

    printf("The prime numbers between of %d and %d:\n",min, max);
    for(int a = min; a<=max;a++){
        if(a < 2){
            gate = 0;
        }

        for(int e = 2; e<a; e++){
            if(a%e==0){
                gate = 0;
            }
        }

        if(gate){

            if(!any){
                printf(", ");
            }

            printf("%d",a);
            any = 0;
        }

        gate = 1;
    }
    if(any){
        printf("No any prime numbers between them.");
    }

    return 0;
}
