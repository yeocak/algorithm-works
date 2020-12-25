//A program that converts decimal to binary

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input;

    printf("Enter a number: ");
    scanf("%d",&input);
    toBinary(input);

    return 0;
}

void toBinary(int input){
    long long int converter = 1;
    long long int number = 0;

    while(input != 0){
        number += input%2*converter;
        converter *= 10;
        input/=2;
    }

    printf("%lld",number);
}

