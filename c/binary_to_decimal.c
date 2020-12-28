//A program that converts binary to decimal

#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int input;

    printf("Enter a binary number: ");
    scanf("%lld",&input);

    toDecimal(input);

    return 0;
}

void toDecimal(long long int input){
    int step = 0;
    int sum = 0;

    while(input > 0){

        if(input%10 == 1){
            sum += pow(2, step);
        }
        else if(input%10 != 0){
            printf("Error, broken number!");
            return;
        }

        step+=1;
        input /= 10;

    }

    printf("Decimal is: %d", sum);
}

