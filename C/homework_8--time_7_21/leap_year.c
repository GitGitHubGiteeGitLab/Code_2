/*************************************************************************
	> File Name: leap_year.c
	> Author: 
	> Mail: 
	> Created Time: Fri 21 Jul 2023 06:58:17 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdbool.h>

_Bool is_leapyear(int n){
    if((n % 4 == 0 && n % 100) || n % 400 == 0)return true;
    return false;
}

int main(){
    int year;
    while(~scanf("%d", &year)){
        if(is_leapyear(year) == true)printf("%d is a leap year\n", year);
        else printf("%d is not a leap year\n", year);
    }
    return 0;
}
