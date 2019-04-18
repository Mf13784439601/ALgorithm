//#include<iostream>
//#include<cstdio>
//#include<cstdlib>
//
//using namespace std;
//
//int cnt = 0;
//void merge_sort(int *A,int start,int end,int *res) {
//	if (end - start > 1) {
//		int mid = start + (end - start) / 2;
//		merge_sort(A, start, mid, res);
//		merge_sort(A, mid, end, res);
//		int p = start, q = mid, i = start;
//		while (p < mid || q < end) {
//			if (q >= end || p<mid&&A[p] <= A[q]) {
//				res[i++] = A[p++];
//			}
//			else {
//				res[i++] = A[q++];
//				cnt += mid - p;
//			}
//		}
//		for (i = start; i < end; i++) {
//			A[i] = res[i];
//		}
//	}
//}
//int main() {
//	int A[10] = { 5,77,1,8,3,46,85,1002,3,6 };
//	int R[10];
//	merge_sort(A, 0, 10, R);
//	cout << cnt<<endl;
//
//	return 0;
//}