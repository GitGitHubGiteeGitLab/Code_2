#pragma once
#include<iostream>
#include<queue>

void MergeSortNonR(int* nums, int n);
void MergeSortNonR(int* nums, int n) {
	int* tmp = new int[n];
	std::queue<int> q;
	int gap = 1;
	while (gap < n) {
		
		for (int i = 0; i < n; i += 2 * gap) {
			int s1 = i, e1 = s1 + (gap - 1);
			int s2 = i + gap, e2 = s2 + (gap - 1);
			int cnt = 0;
			if (e1 >= n || s2 >= n) {
				break;
			}
			if (e2 >= n) {
				//ÐÞÕýe2
				e2 = n - 1;
			}
			while (s1 <= e1 && s2 <= e2) {
				if (nums[s1] < nums[s2]) {
					tmp[cnt++] = nums[s1++];
				}
				else {
					tmp[cnt++] = nums[s2++];
				}
			}
			while (s1 <= e1) {
				tmp[cnt++] = nums[s1++];
			}
			while (s2 <= e2) {
				tmp[cnt++] = nums[s2++];
			}
			memcpy(nums + i, tmp, sizeof(int) * cnt);
		}

		gap *= 2;
	}


	delete[] tmp;
}


void CountSort(int* nums, int n) {
	//find min & max
	int minnum = nums[0];
	int maxnum = nums[0];
	for (int i = 1; i < n; i++) {
		if (minnum > nums[i]) {
			minnum = nums[i];
		}
		if (maxnum < nums[i]) {
			maxnum = nums[i];
		}
	}
	
	int range = maxnum - minnum + 1;
	int* tmp = new int[range] {0};

	//Ó³Éä
	for (int i = 0; i < n; i++) {
		tmp[nums[i] - minnum]++;
	}

	//ÅÅÐò
	int i = 0;
	for (int j = 0; j < range; j++) {
		while (tmp[j]--) {
			nums[i++] = j + minnum;
		}
	}

}