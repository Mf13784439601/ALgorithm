//#include<iostream>
//#include<cstdio>
//#include<cstdlib>
//#include<string>
//#include<algorithm>
//
//using namespace std;
////���ڽ����Ӽ������㷨�� ����һ�����ϣ�ö�����п��ܵ��Ӽ�
//
////�������취     ��һ��˼·��һ��ѡ��һ��Ԫ�طŵ������У�
//void print_subSet(int n, int *A, int cur) {
//	for (int i = 0; i < cur; i++) {
//		cout << A[i] << " ";//��ӡ��ǰ����
//	}
//	cout << endl;
//	int s = cur ? A[cur - 1] + 1 : 0;//ȷ����ǰԪ�ص���С����ֵ
//	for (int i = s; i < n; i++) {
//		A[cur] = i;
//		print_subSet(n, A, cur + 1);//�ݹ鹹���Ӽ�
//	}
//}//����Ĵ����õ��˶���ļ��ɣ��涨����A ������Ԫ�صı�Ŵ�С�������У��Ͳ���Ѽ���{1��2}����{1��2}��{2��1} ��������ˡ�
//
////λ������
////�ڶ���˼·�ǹ���һ��λ���� B[i] ��������ֱ�ӹ����Ӽ�A��������B[i]=1,���ҽ��� i ���Ӽ�A�С��ݹ�ʵ�����£�
//void print_subSetByBitVector(int n, int *B, int cur) {
//	if (cur == n) {
//		for (int i = 0; i < cur; i++)
//			if (B[i])
//				cout << i << "  ";//��ӡ��ǰ����
//		cout << endl;
//		return;
//	}
//	B[cur] = 1;//ѡ�� cur ��Ԫ��
//	print_subSetByBitVector(n, B, cur + 1);
//	B[cur] = 0;
//	print_subSetByBitVector(n, B, cur + 1);//��ѡ��cur��Ԫ��
//}
////�����Ʒ�
////���ö����Ʊ�ʾ�Ӽ�ʱ��λ�����еİ�λ�롢������Ӧ���ϵĽ������ͶԳƲ�
//void print_subSetByBinary(int n,int s) {//��ӡ{0,1,2,3,����,n-1} ���Ӽ�s
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