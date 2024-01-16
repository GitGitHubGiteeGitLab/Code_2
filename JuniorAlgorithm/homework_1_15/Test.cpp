#define _CRT_SECURE_NO_WARNINGS
#include "Sort.h"
using namespace std;
int main() {
	int nums[] = {7, 6, 5, 4, 3, 2, 1};
	for (int i = 0; i < 7; i++) {
		cout << nums[i] << ", ";
	}
	cout << endl;
	MergeSortNonR(nums, 7);
	for (int i = 0; i < 7; i++) {
		cout << nums[i] << ", ";
	}
	cout << endl;

	int nums2[] = { -1, 2, -5, -9, 9, 34, 5 };
	for (int i = 0; i < 7; i++) {
		cout << nums2[i] << ", ";
	}
	cout << endl;
	CountSort(nums2, 7);
	for (int i = 0; i < 7; i++) {
		cout << nums2[i] << ", ";
	}
	cout << endl;
}