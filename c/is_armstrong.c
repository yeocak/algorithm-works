// A algorithm check the number if it is a Armstrong number.
// Used pointer.
// Didn't use Math library.

#include <stdio.h>

int main()
{
    int input;
    int *valueOf;
    scanf("%d",&input);
    valueOf = &input;

    int isArmstrong = armstrong(valueOf);

    if(isArmstrong){
        printf("%d is a Armstrong number.", *valueOf);
    } else{
        printf("%d is not a Armstrong number.", *valueOf);
    }

    return 0;
}

int armstrong(int *number){
    int digitsOf = calculateDigitsNumber(number);
    int sum = summing(number, digitsOf);

    return (sum == *number);
}

int calculateDigitsNumber(int *number){
    int temporary = *number;
    int digitsNumber = 0;
    while(temporary>0){
        digitsNumber+=1;
        temporary = temporary / 10;
    }

    return digitsNumber;
}

int summing(int *number, int digitsNumb){
    int temporary = *number;
    int sum = 0;

    for(int a = 0; a < digitsNumb; a++){
        int digit = temporary % 10;
        sum += takePow(digit, digitsNumb);
        temporary = temporary / 10;
    }

    return sum;
}

int takePow(int digit, int pow){
    int sum = 1;
    for(int a = 0; a < pow; a++){
        sum = sum * digit;
    }

    return sum;
}
