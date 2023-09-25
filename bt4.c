//
// Created by dinht on 9/25/2023.
//

#include <stdio.h>
int love()
// int main()
 {
    int i;
    i=1;
    char a;
    do{
        printf("Do you love me?");
        fflush(stdin);
        scanf("%c", &a);
        i++;

    }
    while(a!='Y'&&i<=9);

    return 1;
 }
