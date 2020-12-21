/*A program that displays two coordinates*/

#include <stdio.h>

int main()
{
    int x1,y1,x2,y2;

    printf("Write two coordinates: (x1 y1 x2 y2):\n");
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);

    for(int a = 0; a < maxormin(x1,x2,1);a++){
        printf("%d",a+1);
    }
    printf("\n");

    upper(maxormin(y1,y2,0)-1,maxormin(x1,x2,1));

    middleup(x1,y1,x2,y2);

    middle(y1, y2);

    middledown(x1,y1,x2,y2);

    return 0;
}

int maxormin(int a,int b, int c){
    //If c == 1, this function finds max of a or b.
    //Else returns minimum.

    if(c == 1){
        if(a > b){
            return a;
        }
        else{
            return b;
        }
    }
    else{
        if(a > b){
            return b;
        }
        else{
            return a;
        }
    }
}

void upper(int up, int maxx){
    for(int a = 0; a<up; a++){
        for(int e = 0; e<maxx; e++){
            printf(" ");
        }
        printf("\n");
    }
}

void middleup(int x1, int y1, int x2, int y2){
    if(y1 != y2){
        if(maxormin(y1,y2,1) == y1){
                //y2 is upper
            for(int a = 0; a <x2-1;a++){
                printf(" ");
            }
            printf("A");
            for(int a = 0; a <x2-1;a++){
                printf(" ");
            }
        }
        else{
            for(int a = 0; a <x1-1;a++){
                printf(" ");
            }
            printf("A");
            for(int a = 0; a <x1-1;a++){
                printf(" ");
            }
        }
    }
    else{
        for(int a = 0; a < maxormin(x1,x2,0)-1;a++){
            printf(" ");
        }
        printf("A");
        for(int a = 0; a < maxormin(x1,x2,1)-maxormin(x1,x2,0)-1;a++){
            printf(" ");
        }
        printf("B");
    }
}

void middle(int y1, int y2){
    for(int a = 0; a<maxormin(y1,y2,1)-maxormin(y1,y2,0);a++){
        printf("\n");
    }
}

void middledown(int x1, int y1, int x2, int y2){
    if(y1 != y2){
        if(maxormin(y1,y2,1) == y1){
                //y2 is upper
            for(int a = 0; a <x1-1;a++){
                printf(" ");
            }
            printf("B");
            for(int a = 0; a <x1-1;a++){
                printf(" ");
            }
        }
        else{
            for(int a = 0; a <x2-1;a++){
                printf(" ");
            }
            printf("B");
            for(int a = 0; a <x2-1;a++){
                printf(" ");
            }
        }
    }
}
