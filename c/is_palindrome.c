//A program that controls the given numbers is palindrome or not.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int input;

    scanf("%ld",&input);

    if(isPalindrome(input)){
        printf("It's palindrome!");
    }
    else{
        printf("It's not palindrome!");
    }

    return 0;
}

int isPalindrome(long int inp){
    int dig = numbOfDigits(inp);
    for(int a = 1; a<=dig/2; a++){
        if(findDigit(inp,a) != findDigit(inp,dig-a+1)){
            return 0;
        }
    }
    return 1;
}

int numbOfDigits(long int inp){
    int counter = 0;
    while(inp > 0){
        inp=inp/10;
        counter+=1;
    }
    return counter;
}

int findDigit(long int inp, int rightDigit){
    int go = (int)(inp/pow(10,rightDigit-1))%10;
    return go;
}
