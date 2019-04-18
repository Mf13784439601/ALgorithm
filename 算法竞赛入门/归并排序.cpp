//#include<iostream>
//#include<cstdio>
//#include<cstdlib>
//
//using namespace std;
//
//void merge_sort(int *A, int start, int end, int *res) {
//	if (end - start > 1) {
//		int mid = start + (end - start) / 2;//划分
//		int p = start, q = mid, i = start;
//		merge_sort(A, start, mid, res);
//		merge_sort(A, mid, end,res);
//		while (p < mid || q < end) {
//			if (q >= end || (p < mid&&A[p] <= A[q]))
//				res[i++] = A[p++];
//			else
//				res[i++] = A[q++];
//		}
//		for (i = start; i < end; i++)
//			A[i] = res[i];//从辅助空间复制回A数组
//	}
//}