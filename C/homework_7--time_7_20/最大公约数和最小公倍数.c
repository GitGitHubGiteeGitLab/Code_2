/*************************************************************************
	> File Name: 最大公约数和最小公倍数.c
	> Author: 
	> Mail: 
	> Created Time: Thu 20 Jul 2023 07:02:10 PM CST
 ************************************************************************/

#include<stdio.h>
//迭乘法求最大公倍数
int main(){
    int a, b, i = 1;
    scanf("%d%d", &a, &b);
    while(a * i % b != 0){
        i++;
    }
    printf("%d和%d的最小公倍数是：%d", a, b, a * i);
    return 0;
}

//辗转相除法和最大公约数，最小公倍数之间的乘法关系,一石二鸟

int main4(){
    int a, b, c, d, left;
    scanf("%d%d", &a, &b);
    c = a, d = b;
    while(b){
        left = a % b;
        a = b;
        b = left;
    }
    printf("%d和%d的最大公约数是：%d\n"
           "        最小公倍数是：%d\n", c, d, a, c * d / a);
    return 0;

}

//暴力法求最小公倍数
int main3(){
    int a, b;
    scanf("%d%d", &a, &b);
    int max = a > b ? a : b, c = a, d= b;
    while(1){
        if(!(max % a) && !(max % b)){
            break;
        }
        max++;
    }
    printf("%d和%d的最小公倍数是%d\n", c, d, max);
    return 0;
}

//求最大公约数的第二种方法：辗转相除法
int main2(){
    int a, b, c, d, left;
    scanf("%d%d", &a, &b);
    c = a, d = b;
    while(b){
        left = a % b;
        a = b;
        b = left;
    }
    printf("%d和%d的最大公约数是： %d\n", c, d, a);
    return 0;
}

//最大公约数第一种解法：暴力法
int main1(){
    int a, b;
    scanf("%d%d", &a, &b);
    //求最小公倍数1
    int min = a > b ? b : a;
    while(min != 1){
        if(!(a % min) && !(b % min)){
            break;
        }
        min--;
    }
    printf("%d和%d的最大公约数： %d\n", a, b, min);
    return 0;
}

