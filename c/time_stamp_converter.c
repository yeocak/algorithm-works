/*  A program that converts seconds
    to hours, minutes and seconds format.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inputSecond;

    printf("Enter seconds:");
    scanf("%d",&inputSecond);

    xParseSeconds(inputSecond);

    return 0;
}

void xParseSeconds(int inputSecond){
    int seconds = inputSecond%60;
    int minutes = (inputSecond/60)%60;
    int hours = inputSecond/(60*60);

    printf("%d hours %d minutes %d seconds",hours,minutes,seconds);
}
