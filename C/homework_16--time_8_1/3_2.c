/*************************************************************************
	> File Name: 3_2.c
	> Author: 
	> Mail: 
	> Created Time: Tue 01 Aug 2023 08:32:42 PM CST
 ************************************************************************/

#include<stdio.h>
/*
思路：
1. 给定两个下标left和right，left放在数组的起始位置，right放在数组中最后一个元素的位置
2. 循环进行一下操作
 a. 如果left和right表示的区间[left, right]有效，进行b，否则结束循环
 b. left从前往后找，找到一个偶数后停止
 c. right从后往前找，找到一个奇数后停止
 d. 如果left和right都找到了对应的数据，则交换，继续a，
*/
void swap_arr(int arr[], int sz)
{
	int left = 0;
	int right = sz-1;
	int tmp = 0;


	while(left<right)
	{
     // 从前往后，找到一个偶数，找到后停止
		while((left<right)&&(arr[left]%2==1))
		{
			left++;
		}
     
		// 从后往前找，找一个奇数，找到后停止
		while((left<right)&& (arr[right]%2==0))
		{
			right--;
		}
     
     // 如果偶数和奇数都找到，交换这两个数据的位置
     // 然后继续找，直到两个指针相遇
		if(left<right)
		{
			tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}
