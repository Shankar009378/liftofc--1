#include<stdio.h>

int main(){
    int i, sum=0,r;
    printf("enter a number");
    scanf("%d", &i);
    do{
        r = i%10;
        i = i/10;
        sum = sum +r;
    }
    while(i>0);
    printf("sum is %d", sum);

}