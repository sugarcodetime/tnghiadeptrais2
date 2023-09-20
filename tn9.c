//
// Created by dinht on 9/20/2023.
//
#include<stdio.h>
int main()
{
    int num ,res;
    printf ("nhap so di ban:");
    scanf("%d", &num);
    res = num % 2;
    if (res==0)
        printf("so chan nhe!\n");
    else
        printf("so le roi!\n");
    return 1;


}