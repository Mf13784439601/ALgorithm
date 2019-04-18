//#include<iostream>
//#include<cstdio>
//
//using namespace std;
//
//int binarySearch(int *A,int x,int y,int v) {
//	int mid;
//	while (x < y) {
//		mid = x + (y - x) / 2;
//		if (A[mid] == v)
//			return mid;
//		else if(A[mid]>v) {
//			y = mid;
//		}
//		else {
//			x = mid + 1;
//		}
//	}
//	return -1;
//}