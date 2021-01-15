// A program that finds which number are max and min.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int many;
    int max = -100000000, min = 100000000;
    int number;

    while(1){
        printf("How many numbers do you want to enter?\n");
        scanf("%d",&many);
        if(many > 0){
            break;
        }
        else{
            printf("Wrong entry!");
        }
    }

    for(int a = 0; a<many; a++){
        printf("Enter number\n");
        scanf("%d",&number);
        if(number > max){
            max = number;
        }
        if(number < min){
            min = number;
        }
    }

    printf("\nYour max: %d, your min: %d.",max,min);

    return 0;
}
