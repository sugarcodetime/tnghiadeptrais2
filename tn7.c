//
// Created by dinht on 9/20/2023.
//
#include <stdio.h>

//int toantu(){
    int main(){
    int a = 5;
    int b = 10;
    int c = 7;

    //toan tu toan hoc
    int tong = a + b; //cộng
    int hieu = a - b; // trừ
    int tich = a * b; //nhân
    int thuong = a / b; //chia

    //toan tu quan he
    int ketqua1 = (a > b); //so sánh lớn hơn
    int ketqua2 = (a <= b); //so sánh nhỏ hơn hoặc bằng
    int ketqua3 = (a == c); //so sánh bằng
    int ketqua4 = (a != c); //so sánh khác

    //toán tử logic
    int ketqua5 = ( a < b && b > c); //toán tử logic and
    int ketqua6 = ( a < b || b < c); //toán tử logic or
    int ketqua7 = !(a < b);   //toán tử logic not

    printf("Tong: %d\n",tong);
    printf("Hieu: %d\n",hieu);
    printf("Tich: %d\n",tich);
    printf("Thuong: %d\n",thuong);

    printf("ket qua 1: %d\n", ketqua1);
    printf("ket qua 2: %d\n", ketqua2);
    printf("ket qua 3: %d\n", ketqua3);
    printf("ket qua 4: %d\n", ketqua4);

    printf("ket qua 5: %d\n", ketqua5);
    printf("ket qua 6: %d\n", ketqua6);
    printf("ket qua 7: %d\n", ketqua7);
    return 0;
}
