//#include<iostream>
//#include<cstdio>
//#include<cstdlib>
//#include<string>
//#include<algorithm>
//
//using namespace std;
////本节介绍子集生成算法： 给定一个集合，枚举所有可能的子集
//
////增量构造法     第一种思路是一次选出一个元素放到集合中：
//void print_subSet(int n, int *A, int cur) {
//	for (int i = 0; i < cur; i++) {
//		cout << A[i] << " ";//打印当前集合
//	}
//	cout << endl;
//	int s = cur ? A[cur - 1] + 1 : 0;//确定当前元素的最小可能值
//	for (int i = s; i < n; i++) {
//		A[cur] = i;
//		print_subSet(n, A, cur + 1);//递归构造子集
//	}
//}//上面的代码用到了定序的技巧：规定集合A 中所有元素的编号从小到大排列，就不会把集合{1，2}按照{1，2}和{2，1} 输出两次了。
//
////位向量法
////第二种思路是构造一个位向量 B[i] ，而不是直接构造子集A本身，其中B[i]=1,当且仅当 i 在子集A中。递归实现如下：
//void print_subSetByBitVector(int n, int *B, int cur) {
//	if (cur == n) {
//		for (int i = 0; i < cur; i++)
//			if (B[i])
//				cout << i << "  ";//打印当前集合
//		cout << endl;
//		return;
//	}
//	B[cur] = 1;//选第 cur 个元素
//	print_subSetByBitVector(n, B, cur + 1);
//	B[cur] = 0;
//	print_subSetByBitVector(n, B, cur + 1);//不选第cur个元素
//}
////二进制法
////当用二进制表示子集时，位运算中的按位与、或、异或对应集合的交、并和对称差
//void print_subSetByBinary(int n,int s) {//打印{0,1,2,3,……,n-1} 的子集s
//	for (int i = 0; i < n; i++) {
//		if (s&(1 << i))
//			cout << i << " ";
//	}
//	cout << endl;
//}
//int main() {
//	int A[10];
//	for (int i = 0; i < 10; i++) {
//		A[i] = i;
//	}
//	int n = 10;
//	//print_subSetByBitVector(10, A, 0);
//	for(int i=0;i<(1<<n);i++)
//	print_subSetByBinary(n, i);
//	return 0;
//}