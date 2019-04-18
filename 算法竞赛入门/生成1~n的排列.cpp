//#include<iostream>
//#include<cstdio>
//#include<cstdlib>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//void print_permutation(int n, int *A, int cur) {
//	if (cur == n) {
//		for (int i = 0; i < n; i++) {
//			cout << A[i] << "  ";
//		}
//		cout << endl;
//	}
//	else {
//		for (int i = 1; i <= n; i++) {
//			int ok = 1;
//			for (int j = 0; j < cur; j++) {
//				if (A[j] == i)
//					ok = 0;
//			}
//			if (ok) {
//				A[cur] = i;
//				print_permutation(n, A, cur + 1);//递归调用
//			}
//		}
//	}
//}
////生成可重集的排列
//void print_permutation(int n, int *P, int *A, int cur) {
//	if (cur == n) {
//		for (int i = 0; i < n; i++) {
//			cout << A[i] << "  ";
//		}
//		cout << endl;
//	}
//	else {
//		for (int i = 0; i < n; i++) {
//			if(!i||P[i]!=P[i-1]){
//			int c1 = 0, c2 = 0;
//			for (int j = 0; j < cur; j++) {
//				if (A[j] == P[i])
//					c1++;
//			}
//			for (int j = 0; j < n; j++) {
//				if (P[i] == P[j])
//					c2++;
//			}
//			if (c2 > c1) {
//				A[cur] = P[i];
//				print_permutation(n, P, A, cur + 1);
//			}
//			}
//		}
//	}
//
//}
////下一个 排列   C++ 的STL 中提供了一个库函数 next_permutation  用于枚举所有排列，从字典序最小排列开始，不停地调用“求下一个排列”的过程
//
//int main() {
//	
//	/*int a[11];
//	for (int i = 0; i < 11; i++) {
//		a[i] = i;
//	}
//	print_permutation(5, a, 0);
//	return 0;*/
//	int n, p[10];
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> p[i];
//	}
//	sort(p, p + n);//排序，得到 p 的最小排列
//	do {
//		for (int i = 0; i < n; i++)
//			cout << p[i];
//		cout << endl;
//
//	} while (next_permutation(p, p + n));
//	return 0;
//
//}