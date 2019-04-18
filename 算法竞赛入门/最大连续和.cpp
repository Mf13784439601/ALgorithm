//#include<iostream>
//#include<cstdio>
//#include<math.h>
//#include<algorithm>
//using namespace std;
//
//
//int maxsum(int *A, int start, int end) {  //[start,end)
//	if (end - start == 1) {
//		return A[start];
//	}
//	int mid = (start + end) / 2;
//	int midMax = max(maxsum(A, start, mid), maxsum(A, mid, end));
//
//	int v, L, R;
//	v = 0;
//	L = A[mid - 1];//分治第三步  ：合并，从边界点开始往左的最大连续和L
//	for (int i = mid - 1; i >= start; i--) {
//		L = max(L, v += A[i]);
//	}
//	v = 0;
//	R = A[mid];
//	for (int i = mid; i < end; i++) {
//		R = max(R, v += A[i]);
//	}
//	return max(midMax, L + R);
//}